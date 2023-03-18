using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Plugins
{
    public static class Conference
    {
        private static AndroidJavaObject androidJavaObject = SariskaMediaTransport.GetAndroidJavaObject();

        // Lock Conference Room
        public static void Lock(string password)
        {
            androidJavaObject.Call("lockRoom", password);
        }

        // Unlock Conference Room
        public static void Unlock()
        {
            androidJavaObject.Call("unlockRoom");
        }
    }
}
