package io.sariska.sariskamediaaudiounitymodule;

import android.app.Activity;
import android.content.Context;
import android.content.pm.PackageManager;
import android.media.AudioManager;
import android.os.Bundle;
import androidx.core.app.ActivityCompat;

import java.sql.SQLOutput;
import java.util.List;
import java.util.logging.ConsoleHandler;

import io.sariska.sdk.SariskaMediaTransport;
import io.sariska.sdk.Connection;
import io.sariska.sdk.Conference;
import io.sariska.sdk.JitsiLocalTrack;
import io.sariska.sdk.JitsiRemoteTrack;
import io.sariska.sdk.SariskaMediaTransport;
import com.unity3d.player.UnityPlayer;

public class SariskaAudioUnityDemo {
    private static SariskaAudioUnityDemo _instance;
    private static final String GAME_OBJECT_NAME = "PluginBridge";
    private Activity mUnityActivity;
    private String token;
    private String roomName;
    private List<JitsiLocalTrack> localTracks;
    private Connection connection;
    private Conference conference;
    private Context context;

    private AudioManager audioManager;

    private static final String TAG = "JavaUnityPlugin";

    String[] PERMISSIONS = {
            android.Manifest.permission.RECORD_AUDIO
    };

    int PERMISSION_ALL = 1;

    public static SariskaAudioUnityDemo Instance(Activity context) {
        if (_instance == null) {
            _instance = new SariskaAudioUnityDemo(context);
        }
        return _instance;
    }

    private SariskaAudioUnityDemo(Activity mUnityActivity){

        this.context = mUnityActivity;
        audioManager = (AudioManager) this.context.getSystemService(Context.AUDIO_SERVICE);
        //SMT Initialization
        SariskaMediaTransport.initializeSdk(mUnityActivity.getApplication());
        if (!hasPermissions(mUnityActivity, PERMISSIONS)) {
            ActivityCompat.requestPermissions(mUnityActivity, PERMISSIONS, PERMISSION_ALL);
        }
        this.mUnityActivity = mUnityActivity;
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

    public void startAudioCall(String token, String roomName){
        Bundle options = new Bundle();
        options.putBoolean("audio", true);
        options.putBoolean("video", false);
        options.putInt("resolution", 0);

        SariskaMediaTransport.createLocalTracks(options, tracks -> {
            mUnityActivity.runOnUiThread(() -> {
                localTracks = tracks;
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

    private void createConference(){
        conference = connection.initJitsiConference();

        conference.addEventListener("CONFERENCE_JOINED", () -> {
            for (JitsiLocalTrack track : localTracks) {
                conference.addTrack(track);
            }
        });

        conference.addEventListener("CONFERENCE_LEFT", () -> {
            System.out.println("Conference Left");
        });

        conference.addEventListener("TRACK_ADDED", p -> {
            //Do nothing for now
            JitsiRemoteTrack track = (JitsiRemoteTrack) p;
            if (track.getType().equals("audio")) {
                System.out.println("In the track added ");
                UnityPlayer.UnitySendMessage(GAME_OBJECT_NAME, "HandleParticipantName", conference.getUserName());
                UnityPlayer.UnitySendMessage(GAME_OBJECT_NAME, "HandleTrackAdded", track.getParticipantId());
            }
        });

        conference.addEventListener("TRACK_REMOVED", p ->{
            JitsiRemoteTrack track = (JitsiRemoteTrack) p;
            if (track.getType().equals("audio")) {
                UnityPlayer.UnitySendMessage(GAME_OBJECT_NAME, "HandleTrackRemoved", track.getParticipantId());
            }
        });

        conference.addEventListener("DOMINANT_SPEAKER_CHANGED",p -> {
            System.out.println("The dominant speaker has changed");
            System.out.println(p + "Participant ID");
            UnityPlayer.UnitySendMessage(GAME_OBJECT_NAME, "HandleDominantSpeakerChanged",p.toString());
        });

        conference.join();
    }

    public void onMuteAudio(){
        for(JitsiLocalTrack track: localTracks){
            if(track.getType().equals("audio")){
                track.mute();
            }
        }
    }

    public void onUnMuteAudio(){
        for(JitsiLocalTrack track: localTracks){
            if(track.getType().equals("audio")){
                track.unmute();
            }
        }
    }

    public void onSpeaker(){
        changeAudioState(true);
    }

    public void offSpeaker(){
        changeAudioState(false);
    }

    private void changeAudioState(boolean bool) {
        audioManager.setMode(AudioManager.MODE_IN_COMMUNICATION);
        audioManager.stopBluetoothSco();
        audioManager.setBluetoothScoOn(false);
        audioManager.setSpeakerphoneOn(bool);
    }

    public void onLogout(){
        if(conference != null){
            System.out.println("Leaving Conference");
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
