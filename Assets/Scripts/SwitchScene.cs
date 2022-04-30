using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SwitchScene : MonoBehaviour
{
    public static string InputRoomName;
    Button button;
    string something;
    GameObject inputFieldGameObject;
    public void Start()
    {
        inputFieldGameObject = GameObject.Find("InputField");
        button.onClick.AddListener(TaskOnClick);
    }

    public void TaskOnClick()
    {
        string name = inputFieldGameObject.GetComponent<InputField>().text;
        InputRoomName = name;
        Debug.Log("Name of the room is" + name);
        SceneManager.LoadScene(sceneName: "MediaUnityScene");
    }
   
}
