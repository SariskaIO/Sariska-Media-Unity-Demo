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
    }
}


