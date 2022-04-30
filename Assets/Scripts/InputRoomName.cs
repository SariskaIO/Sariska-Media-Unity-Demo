using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class InputRoomName : MonoBehaviour
{
    InputField input;
    // Start is called before the first frame update
    void Start()
    {
        gameObject.GetComponent<InputField>().onEndEdit.AddListener(displayText);
    }

    private void displayText(string arg0)
    {
        print(arg0);
        Console.WriteLine("Dipak is here");
        Debug.Log(arg0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
