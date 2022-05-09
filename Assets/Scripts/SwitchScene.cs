using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SwitchScene : MonoBehaviour
{
    //Declare string var (static) for room name and user name
    public static string InputRoomName;
    public static string InputUserName;

    //Button to move to the next scene
    Button button;

    GameObject inputFieldRoomNameGameObject;
    GameObject inputFieldUsernameGameObject;
    public void Start()
    {
        //Identify game object based on their names
        inputFieldRoomNameGameObject = GameObject.Find("InputField");
        inputFieldUsernameGameObject = GameObject.Find("InputFieldUsername");

    }

    public void TaskOnClick()
    {
        //Retrive text from input fields
        InputRoomName = inputFieldRoomNameGameObject.GetComponent<InputField>().text;
        InputUserName = inputFieldUsernameGameObject.GetComponent<InputField>().text;
        if(InputRoomName == "")
        {
            return;
        }else if (InputUserName == "")
        {
            return;
        }

        //load the video scene
        SceneManager.LoadScene(sceneName: "MediaUnityScene");
    }
   
}
