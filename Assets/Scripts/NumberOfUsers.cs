using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Plugins.NumberOfUsers
{
    public static class NumberOfUsers
    {
        public static int numberOfUsers = 1;

        public static GameObject[] prefabGameObject = new GameObject[numberOfUsers];

        public static bool userChanged = false;

        public static bool DominantSpeakerChanged = false;

        public static Dictionary<string,string> participantsList = new Dictionary<string, string>();

        public static string DominantSpeakerId = "";

        public static Dictionary<string, string> participantList = new Dictionary<string,string>();

        public static bool isLoggedOut = false;
    }
}


