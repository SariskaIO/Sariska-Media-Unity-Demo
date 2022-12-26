using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


namespace Plugins
{
    public static class Connection
    {
        private static AndroidJavaObject androidJavaObject;

        // Start a Connection
        public static void CreateConnection(AndroidJavaObject javaObject, string roomName, string token)
        {
            androidJavaObject = javaObject;
            androidJavaObject.Call("createConnection", roomName, token);
        }

        // include Callback into it
        // Add an Event Listener 
        public static void AddEventListener(string connectionEvent, string connectionMessage) 
        {
            Debug.Log(connectionEvent);
            androidJavaObject.Call("addConnectionEventListener", connectionEvent, connectionMessage);
        }

        // Remove an Event Listener 
        public static void RemoveEventListener(string connectionEvent)
        {
            // To write on Java side
            androidJavaObject.Call("removeConnectionEventListener", connectionEvent);
        }

        public static void Connect()
        {
            androidJavaObject.Call("connectToConnection");
        }


        // Disconnect for the user
        public static void Disconnect()
        {
            // To write on Java side
            androidJavaObject.Call("disconnect");
        }


    }

}
