using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Plugins.ExternalTextureSecond;
using System;
using UnityEngine.UI;


public class CallingExample : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject muteAudioObject;

    public GameObject speakerObject;

    public Button muteButton;

    public Button speakerButton;

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
        
    }

    public void MuteUnMuteAudio()
    {
        if (!isMuted)
        {
            muteButton.image.sprite = Resources.Load<Sprite>("unmute-audio") as Sprite;
            ExternalTextureSecond.nativeGenericCallHandler("onMuteAudio");
            isMuted = true;
        }
        else
        {
            muteButton.image.sprite = Resources.Load<Sprite>("mute-audio") as Sprite;
            ExternalTextureSecond.nativeGenericCallHandler("onUnMuteAudio");
            isMuted = false;
        }
    }

    public void EndCall()
    {
        ExternalTextureSecond.nativeGenericCallHandler("onEndCall");
    }

    public void OnSpeakerChange()
    {
        if (!isSpeakerOn)
        {
            speakerButton.image.sprite = Resources.Load<Sprite>("speaker-off") as Sprite;
            ExternalTextureSecond.nativeGenericCallHandler("onSpeaker");
            isSpeakerOn = true;
        }
        else
        {
            speakerButton.image.sprite = Resources.Load<Sprite>("speaker") as Sprite;
            ExternalTextureSecond.nativeGenericCallHandler("offSpeaker");
            isSpeakerOn = false;
        }
    }


}
