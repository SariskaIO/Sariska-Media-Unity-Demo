using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ExternalTextureSecond : MonoBehaviour
{
    private AndroidJavaObject mGLTexCtrl;

    [SerializeField] private RawImage localImage;
    [SerializeField] private RawImage remoteImage;

    private int mTextureId;
    private int mWidth;
    private int mHeight;
    private Texture2D texture2D;
    private Texture2D remoteTexture2D;
    private IntPtr _nativeTexturePointer;
    private Token tokenInstance;
    private int tapAudio;
    private int tapVideo;
    //Buttons

    private Button MuteButton;
    private Button MuteVideoButton;
    private Button EndCallButton;

    private void Awake()
    {
        AndroidJavaClass androidWebViewApiClass = new AndroidJavaClass("io.sariska.sariskamediaunityplugin.SariskaMediaUnityPlugin");
        AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject currentActivityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
        mGLTexCtrl = androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject);
        //tokenInstance = TokenAPIHelp.GetSessionToken("dipak");

        var roomName = SwitchScene.InputRoomName;
        var userName = SwitchScene.InputUserName;

        tokenInstance = TokenAPIHelp.GetSessionToken(roomName, userName);
        mGLTexCtrl.Call("setupOpenGL", tokenInstance.token, roomName);
    }

    // Start is called before the first frame update
    void Start()
    {
        remoteTexture2D = new Texture2D(1280, 800, TextureFormat.ARGB32, false)
        { filterMode = FilterMode.Point };
        remoteTexture2D.Apply();
        remoteImage.texture = remoteTexture2D;
        _nativeTexturePointer = remoteTexture2D.GetNativeTexturePtr();

       

        texture2D = new Texture2D(480, 640, TextureFormat.ARGB32, false);
        localImage.texture = texture2D;
        BindTexture(_nativeTexturePointer);

        //Adding Onclick listeners for the buttons
        MuteButton.onClick.AddListener(MuteUnMuteAudio);
        MuteVideoButton.onClick.AddListener(MuteVideo);
        EndCallButton.onClick.AddListener(EndCall);
    }

    private void BindTexture(IntPtr remoteTexturePointer)
    {
        mTextureId= mGLTexCtrl.Call<int>("getStreamTextureID",
                remoteTexturePointer.ToInt32());

        if (mTextureId == 0)
        {
            Debug.Log("Texture ID value is zero");
        }
        mWidth = mGLTexCtrl.Call<int>("getStreamTextureWidth");
        mHeight = mGLTexCtrl.Call<int>("getStreamTextureHeight");
        Debug.Log("Done getting width and height");

        Texture2D nativeTexture = Texture2D.CreateExternalTexture(
                mWidth, mHeight,
                TextureFormat.ARGB32,
                false, false,
                (IntPtr)mTextureId);

        texture2D.UpdateExternalTexture(nativeTexture.GetNativeTexturePtr());
        //Update texture data

        mGLTexCtrl.Call("setupLocalStream");
    }

    public void MuteUnMuteAudio()
    {

        if (tapAudio % 2 == 0)
        {
            mGLTexCtrl.Call("onMuteAudio");
            tapAudio++;
        }
        else
        {
            mGLTexCtrl.Call("onUnMuteAudio");
            tapAudio++;
        }
    }

    public void MuteVideo()
    {
        if (tapVideo % 2 == 0)
        {
            mGLTexCtrl.Call("onMuteVideo");
            tapVideo++;
        }
        else
        {
            mGLTexCtrl.Call("onUnMuteVideo");
            tapVideo++;
        }
    }

    public void switchCamera()
    {
        mGLTexCtrl.Call("onSwitchCamera");
    }

    public void onSpeaker()
    {
        mGLTexCtrl.Call("onSpeakerChanges");
    }

    public void EndCall()
    {
        mGLTexCtrl.Call("onEndCall");
    }

    public void LogOut()
    {
        mGLTexCtrl.Call("onLogout");
        SceneManager.LoadScene(sceneName: "LandingPage");
    }
}
