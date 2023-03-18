using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


namespace Plugins
{
    public static class Connection
    {
        private static AndroidJavaObject androidJavaObject = SariskaMediaTransport.GetAndroidJavaObject();

        // Start a Connection
        public static void CreateConnection(string roomName, string token)
        {
            androidJavaObject.Call("createConnection", roomName, token);
        }

        // include Callback into it
        // Add an Event Listener 
        public static void AddEventListener(string connectionEvent, string connectionMessage) 
        {
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
