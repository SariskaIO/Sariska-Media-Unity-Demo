using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Runtime.InteropServices;
using Plugins.NumberOfUsers;

namespace Plugins.ExternalTextureSecond
{
    public static class ExternalTextureSecond
    {
        private static AndroidJavaObject mGLTexCtrl;

        private const string GAME_OBJECT_NAME = "PluginBridge";

        private static GameObject gameObject;

        private const string JAVA_OBJECT_NAME = "io.sariska.sariskamediaaudiounitymodule.SariskaAudioUnityDemo";

        private static AndroidJavaObject androidJavaNativeCalculation;

        private static int numberOfUsers = 1;

#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern string initializeSariskaMediaTransport(); //External native method

#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern string onMuteAudioIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern string onUnMuteAudioIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern string onSpeakerIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern string offSpeakerIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern string onLogoutIos(); //External native method
#if UNITY_IOS
        [DllImport("__Internal")]
#endif
        private static extern string onEndCallIos(); //External native method

        private class PlatformNotSupportedException : Exception
        {
            public PlatformNotSupportedException() : base() { }
        }


        static ExternalTextureSecond(){

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
        public static void StartAudioCall(string token, string userName)
        {
            var someToken = "eyJhbGciOiJSUzI1NiIsImtpZCI6IjNmYjc1MTJjZjgzYzdkYTRjMjM0Y2QzYWEyYWViOTUzMGNlZmUwMDg1YzRiZjljYzgwY2U5YmQ5YmRiNjA3ZjciLCJ0eXAiOiJKV1QifQ.eyJjb250ZXh0Ijp7InVzZXIiOnsiaWQiOiJydWx2enJuayIsImF2YXRhciI6IiM1NkQxQjQiLCJuYW1lIjoic2RzZHMifSwiZ3JvdXAiOiIxIn0sInN1YiI6InVhdG5jb2U1djcybG5vaGxud2dxdjgiLCJyb29tIjoiKiIsImlhdCI6MTY1ODk0OTg5MSwibmJmIjoxNjU4OTQ5ODkxLCJpc3MiOiJzYXJpc2thIiwiYXVkIjoibWVkaWFfbWVzc2FnaW5nX2NvLWJyb3dzaW5nIiwiZXhwIjoxNjU5MTIyNjkxfQ.KimVuxBLPi3D56wxqcC_jNys2qWcZIUF-culdbR1GJGZJB6B4zn4JfLtwVOSUyALHFaVjgGuH0ZnN6W2_EgB-FEIkN8KpXfFZp0SEqpc62F39g7DdS_eKiyntqUXrgOUORYTCLwWuWarY6AHPgy_SXiFGxez0eAK5sfu1SaQIcAv_Bu3-a2ICAhKfmBnjS-Rj-yBYRSD7BaEgBwvxj99iFuANdXRN_5TLJ0zBtZC6-gFixEGPNALs77qHpdTMsSAXmGVc5gJLNe6OOTzhVyMZl9k2w4Stf3WJbh2vhrIx2RzqjeNbS-Ywrcjnx9bSKUCj9Wh6vKlm5LaaUiy3_1WJA";
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    androidJavaNativeCalculation.Call("startAudioCall", token, userName);
                    break;
                case RuntimePlatform.IPhonePlayer:
                    initializeSariskaMediaTransport();
                    break;
                default:
                    throw new PlatformNotSupportedException();

            }
        }

        private class NativeCallbackHandler : MonoBehaviour
        {
            public GameObject prefab;

            //public int numbersToCreate;

            private void HandleTrackAdded(string exception)
            {
                Debug.Log(exception);
                numberOfUsers = numberOfUsers + 1;
                NumberOfUsers.NumberOfUsers.numberOfUsers = numberOfUsers;
                NumberOfUsers.NumberOfUsers.userChanged = true;
                Debug.Log("number of user = " + numberOfUsers);
            }

            private void HandleTrackRemoved(string exception)
            {
                numberOfUsers = numberOfUsers - 1;
                NumberOfUsers.NumberOfUsers.numberOfUsers = numberOfUsers;
                NumberOfUsers.NumberOfUsers.userChanged = true;
                Debug.Log("number of user after removal = " + numberOfUsers);
            }
        }


        public static void nativeGenericCallHandler(string onMethodCalled)
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
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
                    break;
            }
        }
    }
}