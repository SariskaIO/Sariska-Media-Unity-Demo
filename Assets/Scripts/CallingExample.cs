using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Plugins.ExternalTextureSecond;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;



public class CallingExample : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject muteAudioObject;

    public GameObject speakerObject;

    public GameObject exitPanel;

    public Button muteButton;

    private Texture2D localTexture2D;

    [SerializeField] private RawImage localImage;

    public Button speakerButton;

    public Text roomNameText;

    public static bool isMuted = false;

    public static bool isSpeakerOn = false;

    private Token tokenInstance;

    public string roomName;

    public string userName;


    private void Awake()
    {
        muteAudioObject = GameObject.FindWithTag("Mute Button");
        muteButton = muteAudioObject.GetComponent<Button>();

        speakerObject = GameObject.FindWithTag("Speaker Button");
        speakerButton = speakerObject.GetComponent<Button>();

        roomName = SwitchScene.InputRoomName;
        userName = SwitchScene.InputUserName;

        tokenInstance  = TokenAPIHelp.GetSessionToken(roomName, userName);
    }

    void Start()
    {
        roomNameText = GameObject.Find("RoomName").GetComponent<Text>();

        roomNameText.text = SwitchScene.InputRoomName;

        localTexture2D = new Texture2D(720, 1024, TextureFormat.RGBA32, false)
        {
            filterMode = FilterMode.Point
        };

        localTexture2D.Apply();

        localImage.texture = localTexture2D;
        //localImage.texture = localTexture2D;

        try
        {
            Debug.Log("Calling Example Started");
            ExternalTextureSecond.StartAudioCall(tokenInstance.token, roomName);
        }
        catch(Exception exception)
        {
            Debug.LogError(exception);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(ExternalTextureSecond.videoFrameData == null)
        {
            return;
        }
        else
        {
            localTexture2D.LoadRawTextureData(ExternalTextureSecond.videoFrameData);
            localTexture2D.Apply();
        }

    }

    public void MuteUnMuteAudio()
    {
        if (!isMuted)
        {
            muteButton.image.sprite = Resources.Load<Sprite>("unmute-audio") as Sprite;
            ExternalTextureSecond.NativeGenericCallHandler("onMuteAudio");
            isMuted = true;
        }
        else
        {
            muteButton.image.sprite = Resources.Load<Sprite>("mute-audio") as Sprite;
            ExternalTextureSecond.NativeGenericCallHandler("onUnMuteAudio");
            isMuted = false;
        }
    }

    public void EndCall()
    {
        if(exitPanel!= null)
        {
            exitPanel.SetActive(true);
        }
        
    }

    public void EndMeeting()
    {
        ExternalTextureSecond.NativeGenericCallHandler("onEndCall");
    }

    public void onLogOut()
    {
        
        ExternalTextureSecond.NativeGenericCallHandler("onLogout");
        SceneManager.LoadScene(sceneName: "LandingPage");
    }

    public void OnSpeakerChange()
    {
        if (!isSpeakerOn)
        {
            speakerButton.image.sprite = Resources.Load<Sprite>("speaker-off") as Sprite;
            ExternalTextureSecond.NativeGenericCallHandler("onSpeaker");
            isSpeakerOn = true;
        }
        else
        {
            speakerButton.image.sprite = Resources.Load<Sprite>("speaker") as Sprite;
            ExternalTextureSecond.NativeGenericCallHandler("offSpeaker");
            isSpeakerOn = false;
        }
    }


}
