using System;
using UnityEngine;

namespace Plugins
{
    public static class SariskaMediaTransport
    {
        private static AndroidJavaObject androidJavaObject;

        public static void InitializeSdk(AndroidJavaObject androidJavaObject)
        {
            SariskaMediaTransport.androidJavaObject = androidJavaObject;
            androidJavaObject.Call("initializeSariskaMediaTransport");
            androidJavaObject.Call("setupOpenGL");
        }

        public static void CreateLocalTrack(bool audio, bool video, int resolution, IntPtr remotePointer, IntPtr localPointer)
        {
            androidJavaObject.Call("createLocalTrack", audio, video, resolution, remotePointer.ToInt32(), localPointer.ToInt32());
        }


        public static void SendEvent(string SmtEvent)
        {
            androidJavaObject.Call("sendEvent", SmtEvent); // Neeed to rewrite android side
        }
    }

}
