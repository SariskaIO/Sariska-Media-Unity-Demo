using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Runtime.InteropServices;
using Plugins.NumberOfUsers;
using AOT;
using Plugins;

namespace Plugins.SariskaMediaUnitySdk
{

    public unsafe static class SariskaMediaUnitySdk
    {

        private const string GAME_OBJECT_NAME = "PluginBridge";

        private static GameObject gameObject;

        private const string JAVA_OBJECT_NAME = "io.sariska.sariskamediaunityplugin.SariskaMediaUnityPlugin";

        private static AndroidJavaObject androidJavaNativeCalculation;

        private static int numberOfUsers = 0;

        [SerializeField] private static RawImage localImage;

        private static GameObject someObject;

        public static byte[] videoFrameDataLocal;

        public static byte[] videoFrameDataRemote;

        public static int remoteWidth = 0;

        public static int remoteHeight = 0;

        public static int localWidth = 0;

        public static int localHeight = 0;

        public static Token tokenInstance;


#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void initializeSariskaMediaTransport(); //External native method

#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void setupLocalStream(bool audio, bool video, int resolution); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void createConnection(string roomName, string token); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern string getDominantSpeaker(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern int getParticipantCount(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void lockRoom(string password); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void unLockRoom(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onSwitchCamera(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onMuteVideo(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onUnMuteVideo(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onMuteAudio(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onUnMuteAudio(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onSpeaker(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void offSpeaker(); //External native method

        delegate void MyFuncTypeLocal(byte* byteArray, int width, int height);

        [MonoPInvokeCallback(typeof(MyFuncTypeLocal))]
        static void LocalRenderingDelegate(byte* byteArray, int width, int height)
        {
            byte[] streamByteData = new byte[width * height * 4];
            Marshal.Copy((IntPtr)byteArray, streamByteData, 0, width * height * 4);
            videoFrameDataLocal = streamByteData;
            localHeight = height;
            localWidth = width;
        }

        delegate void MyFuncTypeRemote(byte* byteArray, int width, int height);
        [MonoPInvokeCallback(typeof(MyFuncTypeLocal))]
        static void RemoteRenderingDelegate(byte* byteArray, int width, int height)
        {
            remoteWidth = width;
            remoteHeight = height;
            byte[] streamByteData = new byte[width * height * 4];
            Marshal.Copy((IntPtr)byteArray, streamByteData, 0, width * height * 4);
            Debug.Log("Length of streamByteData Remote: " + (width * height * 4).ToString());
            videoFrameDataRemote = streamByteData;
        }

#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        static extern void RegisterCallbackLocal(MyFuncTypeLocal handler, int isLocal); //External native method

        private class PlatformNotSupportedException : Exception
        {
            public PlatformNotSupportedException() : base() { }
        }

        static SariskaMediaUnitySdk(){

            gameObject = new GameObject();

            gameObject.name = "PluginBridge";

            Debug.Log("In the static constructor");

            gameObject.AddComponent<NativeCallbackHandler>();

            UnityEngine.Object.DontDestroyOnLoad(gameObject);

            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    var androidJavaUnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
                    AndroidJavaObject currentActivityObject = androidJavaUnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
                    AndroidJavaClass androidWebViewApiClass = new AndroidJavaClass(JAVA_OBJECT_NAME);
                    androidJavaNativeCalculation = androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject);
                    break;

                case RuntimePlatform.IPhonePlayer:
                    // No initialization needed
                    break;

                default:
                    throw new PlatformNotSupportedException();

            }
        }

        // Method for Initializing Sariska Media Transport SDK
        public static void InitializeSdk()
        { 
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    SariskaMediaTransport.InitializeSdk(androidJavaNativeCalculation);
                    break;

                case RuntimePlatform.IPhonePlayer:
                    initializeSariskaMediaTransport();
                    RegisterCallbackLocal(LocalRenderingDelegate, 1);
                    RegisterCallbackLocal(RemoteRenderingDelegate, 0);
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        // Method for setting up local Stream 
        public static void CreateLocalTrack(bool audio, bool video, int resolution, IntPtr localPointer, IntPtr remotePointer)
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    SariskaMediaTransport.CreateLocalTrack(audio, video, resolution, remotePointer, localPointer);
                    break;

                case RuntimePlatform.IPhonePlayer:
                    setupLocalStream(audio, video, resolution);
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        // Method to create a connection
        public static void CreateConnection(string roomName, string userName)
        {
            tokenInstance = TokenAPIHelp.GetSessionToken(roomName, userName);
            switch (Application.platform)
            {
                case RuntimePlatform.Android:

                    Connection.CreateConnection(androidJavaNativeCalculation, roomName, tokenInstance.token);

                    Connection.AddEventListener("CONNECTION_ESTABLISHED", "Message: Connection Established");

                    Connection.AddEventListener("CONNECTION_FAILED", "Error: Connection Failed!!");

                    Connection.AddEventListener("CONNECTION_DISCONNECTED", "Message: Connection Disconnected");

                    Connection.Connect();

                    break;

                case RuntimePlatform.IPhonePlayer:
                    createConnection(roomName, tokenInstance.token);
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        private class NativeCallbackHandler : MonoBehaviour
        {
            string id;
            string nameParticipant;

            private void HandleParticipantName(string participantName)
            {
                nameParticipant = participantName;
            }

            private void HandleTrackAdded(string participantId)
            {   
                id = participantId;
                
                if (NumberOfUsers.NumberOfUsers.participantsList.ContainsKey(participantId))
                {
                    return;
                }
                NumberOfUsers.NumberOfUsers.participantsList.Add(participantId, nameParticipant);
                Debug.Log("Participant ID is: " + participantId);
                Debug.Log("Participant Name is: " + nameParticipant);
                NumberOfUsers.NumberOfUsers.userChanged = true;
            }

            private void HandleTrackRemoved(string participantId)
            {
                NumberOfUsers.NumberOfUsers.participantsList.Remove(participantId);
                NumberOfUsers.NumberOfUsers.userChanged = true;
            }

            private void HandleDominantSpeakerChanged(string participantId)
            {
                Debug.Log("Dominant Speaker ID is: "+ participantId);
                NumberOfUsers.NumberOfUsers.DominantSpeakerId = participantId;
                NumberOfUsers.NumberOfUsers.userChanged = true;
            }
        }

        public static void clearParticipantsList()
        {
            NumberOfUsers.NumberOfUsers.participantsList.Clear();
        }

        public static void SwitchCamera()
        {

            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("onSwitchCamera");
                    break;

                case RuntimePlatform.IPhonePlayer:
                    onSwitchCamera();
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
            
        }

        public static void MuteAudio()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("onMuteAudio");
                    break;

                case RuntimePlatform.IPhonePlayer:
                    onMuteAudio();
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        public static void UnMuteAudio()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("onUnMuteAudio");
                    break;

                case RuntimePlatform.IPhonePlayer:
                    onUnMuteAudio();
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        public static void MuteVideo()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("onMuteVideo");
                    break;

                case RuntimePlatform.IPhonePlayer:
                    onMuteVideo();
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        public static void UnMuteVideo()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("onUnMuteVideo");
                    break;

                case RuntimePlatform.IPhonePlayer:
                    onUnMuteVideo();
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        public static void OnSpeaker()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("onSpeaker");
                    break;

                case RuntimePlatform.IPhonePlayer:
                    onSpeaker();
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        public static void OffSpeaker()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("offSpeaker");
                    break;

                case RuntimePlatform.IPhonePlayer:
                    offSpeaker();
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
        }

        public static string GetDominantSpeaker()
        {
            string participantId = "";
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    participantId = androidJavaNativeCalculation.Call<string>("getDominantSpeaker");
                    break;
                case RuntimePlatform.IPhonePlayer:
                    participantId = getDominantSpeaker();
                    break;
                default:
                    throw new PlatformNotSupportedException();
            }
            return participantId;
        }

        public static int GetParticipantCount(bool hidden)
        {
            int partcipantCount = 0;
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    partcipantCount = androidJavaNativeCalculation.Call<int>("getParticipantCount", hidden);
                    break;

                case RuntimePlatform.IPhonePlayer:
                    partcipantCount = getParticipantCount();
                    break;

                default:
                    throw new PlatformNotSupportedException();
            }
            return partcipantCount;
        }

        public static void LockRoom(string password)
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("lockRoom", password);
                    break;

                case RuntimePlatform.IPhonePlayer:
                    lockRoom(password);
                    break;
                default:
                    throw new PlatformNotSupportedException();
            }
        }

        public static void UnlockRoom()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("unLockRoom");
                    break;

                case RuntimePlatform.IPhonePlayer:
                    unLockRoom();
                    break;
                default:
                    throw new PlatformNotSupportedException();
            }
        }
    }
}