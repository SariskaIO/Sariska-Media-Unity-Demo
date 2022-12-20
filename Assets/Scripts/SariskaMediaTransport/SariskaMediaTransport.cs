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
            androidJavaObject.Call("initializeSariskaMediaTransport", 123);
            androidJavaObject.Call("setupOpenGL");
        }

        public static void CreateLocalTrack(bool audio, bool video, int resolution, IntPtr remotePointer, IntPtr localPointer)
        {
            androidJavaObject.Call("setupLocalStream", audio, video, resolution, remotePointer.ToInt32(), localPointer.ToInt32());
        }

    }

}
