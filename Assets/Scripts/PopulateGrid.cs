using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Plugins.NumberOfUsers;

public class PopulateGrid : MonoBehaviour

{
    public GameObject prefab;
    GameObject[] prefabGameObject = NumberOfUsers.prefabGameObject;

    // Start is called before the first frame update
    void Start()
    {
        populate();
    }

    // Update is called once per frame
    void Update()
    {
        if(NumberOfUsers.userChanged == false)
        {
            return;
        }
        else
        {
            NumberOfUsers.userChanged = false;
            onDestroyGrid();
            prefabGameObject = new GameObject[NumberOfUsers.numberOfUsers];
            populate();
        }
    }

    void populate()
    {
        for(int i = 0; i < NumberOfUsers.numberOfUsers; i++)
        {
            prefabGameObject[i] = Instantiate(prefab, transform);
        }
    }

    void onDestroyGrid()
    {
        foreach(GameObject obj in prefabGameObject)
        {
            Destroy(obj);
        }

    }
}
