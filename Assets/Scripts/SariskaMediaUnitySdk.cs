using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Runtime.InteropServices;
using Plugins.NumberOfUsers;
using AOT;


namespace Plugins.SariskaMediaUnitySdk
{

    public unsafe static class SariskaMediaUnitySdk
    {
        private static AndroidJavaObject mGLTexCtrl;

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


#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void initializeSariskaMediaTransportAndStartCall(string token); //External native method

#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onMuteAudioIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onUnMuteAudioIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onSpeakerIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void offSpeakerIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onLogoutIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern void onEndCallIos(); //External native method

        delegate void MyFuncTypeLocal(byte* byteArray, int width, int height);

        [MonoPInvokeCallback(typeof(MyFuncTypeLocal))]
        static void LocalRenderingDelegate(byte* byteArray, int width, int height)
        {
            byte[] streamByteData = new byte[width * height * 4];
            Marshal.Copy((IntPtr)byteArray, streamByteData, 0, width * height * 4);
            videoFrameDataLocal = streamByteData;
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

        // Start is called before the first frame update
        public static void StartCall(string token, string rooomName, IntPtr localPointer, IntPtr remotePointer)
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("setupOpenGL", token, rooomName);
                    androidJavaNativeCalculation.Call("setupLocalStream", remotePointer.ToInt32(), localPointer.ToInt32());
                    break;
                case RuntimePlatform.IPhonePlayer:
                    initializeSariskaMediaTransportAndStartCall(token);
                    RegisterCallbackLocal(LocalRenderingDelegate, 1);
                    RegisterCallbackLocal(RemoteRenderingDelegate, 0);
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


        public static void NativeGenericCallHandler(string onMethodCalled)
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    if(onMethodCalled == "onLogout")
                    {
                        clearParticipantsList();
                    }
                    androidJavaNativeCalculation.Call(onMethodCalled);
                    break;
                case RuntimePlatform.IPhonePlayer:
                    switch (onMethodCalled)
                    {
                        case "onMuteAudio":
                            onMuteAudioIos();
                            break;
                        case "onUnMuteAudio":
                            onUnMuteAudioIos();
                            break;
                        case "onSpeaker":
                            onSpeakerIos();
                            break;
                        case "offSpeaker":
                            offSpeakerIos();
                            break;
                        case "onLogout":
                            onLogoutIos();
                            break;
                        case "onEndCall":
                            onEndCallIos();
                            break;
                    }
                    break;
                default:
                    throw new PlatformNotSupportedException();
                    break;
            }
        }
    }
}