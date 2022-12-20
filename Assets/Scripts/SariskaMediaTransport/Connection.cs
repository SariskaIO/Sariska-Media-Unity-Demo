using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


namespace Plugins
{
    public static class Connection
    {

        public static void AddEventListener()
        {

        }
        public static void connect(AndroidJavaObject androidJavaObject, string roomName, string token)
        {
            Debug.Log("Inside Connect");

            androidJavaObject.Call("createConnection", roomName, token);
            System.Console.WriteLine("Inside Connect");

        }



    }

}
