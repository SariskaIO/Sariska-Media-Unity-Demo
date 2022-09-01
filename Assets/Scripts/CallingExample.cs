using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Plugins.SariskaMediaUnitySdk;
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

    private Texture2D localTexture2D; //Local Texture

    private Texture2D remoteTexture2D; //Remote Texture

    [SerializeField] private RawImage localImage; // Local Texture attached to it

    [SerializeField] private RawImage remoteImage; // Remote Texture attached to it

    public Button speakerButton;

    public Text roomNameText;

    private IntPtr remoteTexturePointer; //Remote texture pointer (For Android)

    private IntPtr localTexturePointer; // Local texture pointer (for Android)

    public static bool isMuted = false;

    public static bool isSpeakerOn = false;

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
    }

    void Start()
    {
        roomNameText = GameObject.Find("RoomName").GetComponent<Text>();

        roomNameText.text = SwitchScene.InputRoomName;

        localTexture2D = new Texture2D(720, 1024, TextureFormat.BGRA32, false) // Create local Texture 
        {
            filterMode = FilterMode.Point
        };

        localTexture2D.Apply();

        localImage.texture = localTexture2D;

        localTexturePointer = localTexture2D.GetNativeTexturePtr();
        
        remoteTexture2D = new Texture2D(320, 180, TextureFormat.BGRA32, false) // Create Remote Texture
        {
            filterMode = FilterMode.Point
        };

        remoteTexture2D.Apply();

        remoteImage.texture = remoteTexture2D;

        remoteTexturePointer = remoteTexture2D.GetNativeTexturePtr();

        try
        {
            //Calling SDK from here

            SariskaMediaUnitySdk.InitSariskaMediaTransport();

            SariskaMediaUnitySdk.SetupLocalStream(true, true, 180, localTexturePointer, remoteTexturePointer);

            SariskaMediaUnitySdk.CreateConnection(roomName, userName);
        }

        catch(Exception exception)
        {
            Debug.LogError(exception);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(SariskaMediaUnitySdk.videoFrameDataLocal == null)
        {
            return;
        }
        else
        {
            localTexture2D.LoadRawTextureData(SariskaMediaUnitySdk.videoFrameDataLocal);
            localTexture2D.Apply();
        }

        if(SariskaMediaUnitySdk.videoFrameDataRemote == null)
        {
            return;
        }
        else
        {
            remoteTexture2D.LoadRawTextureData(SariskaMediaUnitySdk.videoFrameDataRemote);
            remoteTexture2D.Apply();
        }

    }

    public void MuteUnMuteAudio()
    {
        if (!isMuted)
        {
            muteButton.image.sprite = Resources.Load<Sprite>("unmute-audio") as Sprite;
            SariskaMediaUnitySdk.MuteAudio();
            isMuted = true;
        }
        else
        {
            muteButton.image.sprite = Resources.Load<Sprite>("mute-audio") as Sprite;
            SariskaMediaUnitySdk.UnMuteAudio();
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
        // Do nothing for now
    }

    public void onLogOut()
    {
        
        // Do nothing for now
        SceneManager.LoadScene(sceneName: "LandingPage");
    }

    public void OnSpeakerChange()
    {
        if (!isSpeakerOn)
        {
            speakerButton.image.sprite = Resources.Load<Sprite>("speaker-off") as Sprite;
            //Do nothing for now
            isSpeakerOn = true;
        }
        else
        {
            speakerButton.image.sprite = Resources.Load<Sprite>("speaker") as Sprite;
            //Do nothing for now
            isSpeakerOn = false;
        }
    }


}
