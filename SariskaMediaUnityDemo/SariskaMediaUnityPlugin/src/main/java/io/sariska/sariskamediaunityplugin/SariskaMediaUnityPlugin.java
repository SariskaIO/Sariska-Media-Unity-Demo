package io.sariska.sariskamediaunityplugin;

import static android.opengl.GLES20.GL_LUMINANCE;
import static android.opengl.GLES20.GL_RGB;
import static android.opengl.GLES20.GL_RGBA;
import static android.opengl.GLES20.GL_TEXTURE_2D;
import static android.opengl.GLES20.GL_UNSIGNED_BYTE;
import static com.facebook.react.bridge.UiThreadUtil.runOnUiThread;

import static java.nio.IntBuffer.wrap;

import android.app.Activity;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.graphics.ColorSpace;
import android.graphics.ImageFormat;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.YuvImage;
import android.opengl.EGL14;
import android.opengl.EGLConfig;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import android.opengl.GLES11Ext;
import android.opengl.GLES20;
import android.opengl.GLUtils;
import android.os.Bundle;
import android.util.Log;
import androidx.core.app.ActivityCompat;
import com.oney.WebRTCModule.WebRTCView;

import org.webrtc.GlUtil;
import org.webrtc.VideoFrame;
import org.webrtc.VideoSink;
import org.webrtc.VideoTrack;
import java.io.ByteArrayOutputStream;
import java.nio.ByteBuffer;
import java.nio.IntBuffer;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import io.sariska.sdk.Connection;
import io.sariska.sdk.Conference;
import io.sariska.sdk.JitsiLocalTrack;
import io.sariska.sdk.JitsiRemoteTrack;
import io.sariska.sdk.SariskaMediaTransport;

public class SariskaMediaUnityPlugin{
    private static SariskaMediaUnityPlugin _instance;
    private Activity mUnityActivity;
    private final ExecutorService mRenderThreadLocal = Executors.newSingleThreadExecutor();
    private final ExecutorService mRenderThreadRemote = Executors.newFixedThreadPool(2);
    private volatile EGLContext mSharedEglContext;
    private volatile EGLConfig mSharedEglConfig;
    private int mTextureID;
    private int mRemoteTextureId;
    private int mTextureWidth;
    private int mTextureHeight;
    private String token;
    private String roomName;
    private List<JitsiLocalTrack> localTracks;
    private VideoTrack localVideoTrack;
    private VideoTrack remoteVideoTrack;
    private Connection connection;
    private Conference conference;


    //It is called by unity to obtain eglcontext, which is executed in the unity thread
    private static final String TAG = "JavaPlugin";
    private EGLDisplay mEGLDisplay = EGL14.EGL_NO_DISPLAY;
    private EGLContext mEglContext = EGL14.EGL_NO_CONTEXT;
    private EGLSurface mEglSurface = EGL14.EGL_NO_SURFACE;

    String[] PERMISSIONS = {
            android.Manifest.permission.CAMERA,
            android.Manifest.permission.RECORD_AUDIO
    };

    int PERMISSION_ALL = 1;

    public static SariskaMediaUnityPlugin Instance(Activity context) {
        if (_instance == null) {
            _instance = new SariskaMediaUnityPlugin(context);
        }
        return _instance;
    }

    private SariskaMediaUnityPlugin(Activity unityActivity){
        SariskaMediaTransport.initializeSdk(unityActivity.getApplication());
        if (!hasPermissions(unityActivity, PERMISSIONS)) {
            ActivityCompat.requestPermissions(unityActivity, PERMISSIONS, PERMISSION_ALL);
        }
        mUnityActivity = unityActivity;
    }

    public boolean hasPermissions(Activity context, String... permissions) {
        if (context != null && permissions != null) {
            for (String permission : permissions) {
                if (ActivityCompat.checkSelfPermission(context, permission) != PackageManager.PERMISSION_GRANTED) {
                    return false;
                }
            }
        }
        return true;
    }

    public void setupLocalStream(int mRemoteTextureId, int mTextureID){

        this.mTextureID = mTextureID;
        this.mRemoteTextureId = mRemoteTextureId;

        Bundle options = new Bundle();
        options.putBoolean("audio", true);
        options.putBoolean("video", true);
        options.putInt("resolution", 180);
        Log.d(TAG, "We at LocalStream");

        SariskaMediaTransport.createLocalTracks(options, tracks -> {
            mUnityActivity.runOnUiThread(() -> {
                localTracks = tracks;
                for (JitsiLocalTrack track: localTracks){
                    if(track.getType().equals("video")){
                        WebRTCView view = track.render();
                        view.setMirror(true);
                        localVideoTrack = view.getVideoTrackForStreamURL(track.getStreamURL());
                        localVideoTrack.setEnabled(true);
                        localVideoTrack.addSink(new VideoSink() {
                            @Override
                            public void onFrame(VideoFrame videoFrame) {
                                VideoFrame.I420Buffer i420Buffer = videoFrame.getBuffer().toI420();
                                final int width = i420Buffer.getWidth();
                                final int height = i420Buffer.getHeight();
                                byte[] nv21Data = createNV21Data(i420Buffer);
                                ByteBuffer bufferOfImage = ByteBuffer.wrap(nv21Data);
                                ByteBuffer YBuffer = i420Buffer.getDataY();
                                ByteBuffer UBuffer = i420Buffer.getDataU();
                                ByteBuffer VBuffer  = i420Buffer.getDataV();
                                YuvImage yuvImage = new YuvImage(nv21Data, ImageFormat.NV21,width,height,null);
                                ByteArrayOutputStream out = new ByteArrayOutputStream();
                                yuvImage.compressToJpeg(new Rect(0, 0, width, height), 100, out);
                                byte[] imageBytes = out.toByteArray();
                                BitmapFactory.Options options = new BitmapFactory.Options();
                                options.inPurgeable = true;
                                options.inInputShareable = true;
                                Bitmap image = BitmapFactory.decodeByteArray(imageBytes, 0, imageBytes.length);
                                //Bitmap rotatedImage = RotateBitmap(image, 180f);
                                updateVideoStream(image, mTextureID);
                                i420Buffer.release();
                                System.gc();
                                Runtime.getRuntime().gc();
                            }
                        });
                    }
                }
            });
        });

        connection = SariskaMediaTransport.JitsiConnection(token, roomName, false);
        connection.addEventListener("CONNECTION_ESTABLISHED", this::createConference);
        connection.addEventListener("CONNECTION_FAILED", () -> {
        });
        connection.addEventListener("CONNECTION_DISCONNECTED", () -> {
        });
        connection.connect();
    }
    

    private void createConference() {
        conference = connection.initJitsiConference();

        conference.addEventListener("CONFERENCE_JOINED", () -> {
            for (JitsiLocalTrack track : localTracks) {
                conference.addTrack(track);
            }
        });
        conference.addEventListener("DOMINANT_SPEAKER_CHANGED", p -> {
            String id = (String) p;
            conference.selectParticipant(id);
        });
        conference.addEventListener("CONFERENCE_LEFT", () -> {
        });
        conference.addEventListener("TRACK_ADDED", p -> {
            JitsiRemoteTrack track = (JitsiRemoteTrack) p;
            runOnUiThread(() -> {
                if(track.getStreamURL().equals(localTracks.get(1).getStreamURL())){
                    //So as to not add local track in remote container
                    return;
                }
                if (track.getType().equals("video")) {
                    WebRTCView view = track.render();
                    view.setMirror(true);
                    remoteVideoTrack = view.getVideoTrackForStreamURL(track.getStreamURL());
                    remoteVideoTrack.addSink(new VideoSink() {
                        @Override
                        public void onFrame(VideoFrame videoFrame) {
                            VideoFrame.I420Buffer i420Buffer = videoFrame.getBuffer().toI420();
                            final int width = i420Buffer.getWidth();
                            final int height = i420Buffer.getHeight();
                            byte[] nv21Data = createNV21Data(i420Buffer);
                            i420Buffer.release();
                            YuvImage yuvImage = new YuvImage(nv21Data, ImageFormat.NV21,width,height,null);
                            ByteArrayOutputStream out = new ByteArrayOutputStream();
                            yuvImage.compressToJpeg(new Rect(0, 0, width, height), 100, out);
                            byte[] imageBytes = out.toByteArray();
                            BitmapFactory.Options options = new BitmapFactory.Options();
                            options.inPurgeable = true;
                            options.inInputShareable = true;
                            Bitmap image = BitmapFactory.decodeByteArray(imageBytes, 0, imageBytes.length);
                            //Bitmap rotatedImage = RotateBitmap(image, 180f);
                            updateRemoteVideoStream(image, mRemoteTextureId);
                            System.gc();
                            Runtime.getRuntime().gc();
                        }
                    });
                }
            });
        });

        conference.addEventListener("TRACK_REMOVED", p -> {
            JitsiRemoteTrack track = (JitsiRemoteTrack) p;
            runOnUiThread(() -> {
                remoteVideoTrack.removeSink(new VideoSink() {
                    @Override
                    public void onFrame(VideoFrame videoFrame) {
                        //do nothing for now
                    }
                });
            });
        });
        conference.join();
    }

    private byte[] createNV21Data(VideoFrame.I420Buffer i420Buffer) {
        final int width = i420Buffer.getWidth();
        final int height = i420Buffer.getHeight();
        final int chromaStride = width;
        final int chromaWidth = (width + 1) / 2;
        final int chromaHeight = (height + 1) / 2;
        final int ySize = width * height;
        final ByteBuffer nv21Buffer = ByteBuffer.allocateDirect(ySize + chromaStride * chromaHeight);
        // We don't care what the array offset is since we only want an array that is direct.
        @SuppressWarnings("ByteBufferBackingArray")
        final byte[] nv21Data = nv21Buffer.array();
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                final byte yValue = i420Buffer.getDataY().get(y * i420Buffer.getStrideY() + x);
                nv21Data[y * width + x] = yValue;
            }
        }

        for (int y = 0; y < chromaHeight; ++y) {
            for (int x = 0; x < chromaWidth; ++x) {
                final byte uValue = i420Buffer.getDataU().get(y * i420Buffer.getStrideU() + x);
                final byte vValue = i420Buffer.getDataV().get(y * i420Buffer.getStrideV() + x);
                nv21Data[ySize + y * chromaStride + 2 * x + 0] = vValue;
                nv21Data[ySize + y * chromaStride + 2 * x + 1] = uValue;
            }
        }

        return nv21Data;
    }

    public void setupOpenGL(String tokenFromUnity, String roomName)
    {
        this.token = tokenFromUnity;
        this.roomName = roomName;
        //Get eglcontext and egldisplay of the unity thread
        mSharedEglContext = EGL14.eglGetCurrentContext();
        if (mSharedEglContext == EGL14.EGL_NO_CONTEXT) {
            Log.d(TAG, mSharedEglContext.toString());
            Log.d(TAG, EGL14.eglGetCurrentContext().toString());
            Log.d(TAG, "No EGL context present");
        }
        EGLDisplay sharedEglDisplay = EGL14.eglGetCurrentDisplay();
        if (sharedEglDisplay == EGL14.EGL_NO_DISPLAY) {
            Log.d(TAG, "No EGL Display");
        }

        //Gets the eglconfig of the unity drawing thread
        int[] numEglConfigs = new int[1];
        EGLConfig[] eglConfigs = new EGLConfig[1];
        if (!EGL14.eglGetConfigs(sharedEglDisplay, eglConfigs, 0,
                eglConfigs.length,numEglConfigs, 0)) {
            Log.d(TAG, "No EGL Config");
        }

        mSharedEglConfig = eglConfigs[0];
        mRenderThreadLocal.execute(new Runnable() {
            @Override
            public void run() {
                //Java thread initializes OpenGL environment
                try {
                    initOpenGL();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });

        mRenderThreadRemote.execute(new Runnable() {
            @Override
            public void run() {
                try{
                    initOpenGL();
                }catch (Exception e){
                    e.printStackTrace();
                }
            }
        });
    }


    private void initOpenGL() throws Exception {
        mEGLDisplay = EGL14.eglGetDisplay(EGL14.EGL_DEFAULT_DISPLAY);
        if (mEGLDisplay == EGL14.EGL_NO_DISPLAY) {
            Log.d(TAG, "No Display found");
        }
        int[] version = new int[2];
        if (!EGL14.eglInitialize(mEGLDisplay, version, 0, version, 1)) {
            Log.d(TAG, "Cannot initialize EGL");
        }
        int[] eglContextAttribList = new int[]{
                EGL14.EGL_CONTEXT_CLIENT_VERSION, 2, // the version should be consistent with that used by unity
                EGL14.EGL_NONE
        };

        //Pass eglcontext and eglconfig of unity thread as parameters to eglcreatecontext,
        //Create the eglcontext of the java thread, so that two threads can share the eglcontext
        mEglContext = EGL14.eglCreateContext(
                mEGLDisplay, mSharedEglConfig, mSharedEglContext,
                eglContextAttribList, 0);
        if (mEglContext == EGL14.EGL_NO_CONTEXT) {
            Log.d(TAG, "Incorrect EGL Context");
        }

        int[] surfaceAttribList = {
                EGL14.EGL_WIDTH, 64,
                EGL14.EGL_HEIGHT, 64,
                EGL14.EGL_NONE
        };

        //The java thread does not actually paint, so it creates a pbuffersurface instead of a windowsurface
        //Pass the eglconfig of the unity thread as a parameter to eglcreatepuffersurface
        //Create eglsurface for java thread
        mEglSurface = EGL14.eglCreatePbufferSurface(mEGLDisplay, mSharedEglConfig, surfaceAttribList, 0);
        if (mEglSurface == EGL14.EGL_NO_SURFACE) {
            Log.d(TAG, "No EGL surface found");
        }
        if (!EGL14.eglMakeCurrent(mEGLDisplay, mEglSurface, mEglSurface, mEglContext)) {
            try{
                EGL14.eglMakeCurrent(mEGLDisplay, mEglSurface, mEglSurface, mEglContext);
            }catch (Exception e){
                throw new Exception(e);
            }
        }
        GLES20.glFlush();
    }

    public int getStreamTextureID(int remoteTextureId){
        this.mRemoteTextureId = remoteTextureId;
        return mTextureID;
    }

    public int getStreamTextureWidth(){
        return this.mTextureWidth;
    }

    public int getStreamTextureHeight(){
        return this.mTextureHeight;
    }

    public void updateBufferLocalStream(int textureIdLocal, ByteBuffer buffer, int width, int height){
        mRenderThreadLocal.execute(new Runnable() {
            @Override
            public void run() {
                GLES20.glBindTexture(GL_TEXTURE_2D, textureIdLocal);
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_NEAREST);
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_NEAREST);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR);
                GLES20.glTexImage2D(GL_TEXTURE_2D,0, GL_LUMINANCE, width, height, 0, GL_LUMINANCE, GL_UNSIGNED_BYTE, buffer);
                GlUtil.checkNoGLES2Error("EglRenderer.notifyCallbacks");
                //GLUtils.texImage2D(GL_TEXTURE_2D, 0, bitmap, 0);
                GLES20.glBindTexture(GL_TEXTURE_2D, 0);
                //bitmap.recycle();// Reclaim memory
            }
        });
    }

    public void updateRemoteVideoStream(Bitmap bitmap, int mTextureIDLocal){
        mRenderThreadRemote.execute(new Runnable() {
            @Override
            public void run() {
                GLES20.glBindTexture(GL_TEXTURE_2D, mTextureIDLocal);
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_NEAREST);
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_NEAREST);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR);
                GLUtils.texImage2D(GL_TEXTURE_2D, 0, bitmap, 0);
                GLES20.glBindTexture(GL_TEXTURE_2D, 0);
                bitmap.recycle();// Reclaim memory
            }
        });
    }

    public void updateVideoStream(Bitmap bitmap, int textureIdLocal){
        mRenderThreadLocal.execute(new Runnable() {
            @Override
            public void run() {
                GLES20.glBindTexture(GL_TEXTURE_2D, textureIdLocal);
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_NEAREST);
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_NEAREST);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR);
                GLES20.glTexParameteri(GL_TEXTURE_2D, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR);
                GLUtils.texImage2D(GL_TEXTURE_2D, 0, bitmap, 0);
                GLES20.glBindTexture(GL_TEXTURE_2D, 0);
                bitmap.recycle();// Reclaim memory
            }
        });
    }

    public void onMuteAudio(){
        localTracks.get(0).mute();
    }

    public void onUnMuteAudio(){
        localTracks.get(0).unmute();
    }

    public void onMuteVideo(){
        localTracks.get(1).mute();
    }

    public void onUnMuteVideo(){
        localTracks.get(1).unmute();
    }

    public void onSwitchCamera(){
        localTracks.get(1).switchCamera();
    }

    public void onSpeakerChanges(){
        //need to do
    }


    public void onLogout(){
        if(conference != null){
            conference.leave();
        }
        connection.disconnect();
    }

    public void onEndCall(){
        if(conference != null){
            conference.leave();
        }
        connection.disconnect();
        mUnityActivity.finish();
    }
}
