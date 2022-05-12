using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ExternalTextureSecond : MonoBehaviour
{
    private AndroidJavaObject mGLTexCtrl;
    bool isPaused = false;

    [SerializeField] private RawImage localImage;
    [SerializeField] private RawImage remoteImage;

    private int mTextureId;
    private int mWidth;
    private int mHeight;

    private Texture2D localTexture2D;
    private Texture2D remoteTexture2D;

    private IntPtr remoteTexturePointer;
    private IntPtr localTexturePointer;

    private Token tokenInstance;
    private int tapAudio;
    private int tapVideo;
    public Text roomNameText;

    private void Awake()
    {
        Screen.sleepTimeout = (int)SleepTimeout.NeverSleep;

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
        roomNameText = GameObject.Find("RoomName").GetComponent<Text>();
        roomNameText.text = "Room Name: " + SwitchScene.InputRoomName;

        Debug.Log("We before local texture");

        // local
        localTexture2D = new Texture2D(480, 640, TextureFormat.ARGB32, false)
        {
            filterMode = FilterMode.Point
        };

        localTexture2D.Apply();
        localImage.texture = localTexture2D;
        Debug.Log("Applied local texture");
        localTexturePointer = localTexture2D.GetNativeTexturePtr();
        Debug.Log("we after local texture");
        remoteTexture2D = new Texture2D(480, 640, TextureFormat.ARGB32, false)
        {
            filterMode = FilterMode.Point
        };

        remoteImage.texture = remoteTexture2D;
        remoteTexture2D.Apply();
        remoteTexturePointer = remoteTexture2D.GetNativeTexturePtr();

        BindTexture(remoteTexturePointer, localTexturePointer);

    }

    void OnGUI()
    {
        if (isPaused)
            GUI.Label(new Rect(100, 100, 50, 30), "Game paused");
    }

    void OnApplicationFocus(bool hasFocus)
    {
        isPaused = !hasFocus;
    }

    void OnApplicationPause(bool pauseStatus)
    {
        isPaused = pauseStatus;
    }

    private void BindTexture(IntPtr remoteTexturePointer, IntPtr localTexturePointer)
    {
        //Update texture data
        mGLTexCtrl.Call("setupLocalStream", remoteTexturePointer.ToInt32(), localTexturePointer.ToInt32());
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

    public void Update()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            // Check if Back was pressed this frame
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                // Quit the application
                mGLTexCtrl.Call("onEndCall");
            }
        }
        Debug.Log("Internet");
        Debug.Log(Application.internetReachability);
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Debug.Log("Error. Check internet connection!");
        }
    }
}
