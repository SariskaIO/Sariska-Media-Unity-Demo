using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Plugins.NumberOfUsers;

public class PopulateGrid : MonoBehaviour

{
    public GameObject prefab;
    GameObject[] prefabGameObject;

    // Start is called before the first frame update
    void Start()
    {
        
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
            Debug.Log("Number of participants are: "+ NumberOfUsers.participantsList.Count);
            prefabGameObject = new GameObject[NumberOfUsers.participantsList.Count];
            populate();
        }

        if(NumberOfUsers.isLoggedOut == true)
        {
            NumberOfUsers.participantsList.Clear();
            NumberOfUsers.isLoggedOut = false;
        }
    }

    void populate()
    {
        var count = 0;

        foreach (var item in NumberOfUsers.participantsList)
        {
            prefabGameObject[count] = Instantiate(prefab, transform);
            if (count == 0)
            {
                if (item.Key == NumberOfUsers.DominantSpeakerId)
                {
                    Image prefabImage = prefabGameObject[count].GetComponent<Image>();
                    prefabImage.sprite = Resources.Load<Sprite>("Local-High") as Sprite;
                }
                else
                {
                    Image prefabImage = prefabGameObject[count].GetComponent<Image>();
                    prefabImage.sprite = Resources.Load<Sprite>("Local") as Sprite;
                }
            }
            else
            {
                if (item.Key == NumberOfUsers.DominantSpeakerId)
                {
                    Image prefabImage = prefabGameObject[count].GetComponent<Image>();
                    prefabImage.sprite = Resources.Load<Sprite>("Remote-High") as Sprite;
                }
                else
                {
                    Image prefabImage = prefabGameObject[count].GetComponent<Image>();
                    prefabImage.sprite = Resources.Load<Sprite>("Remote") as Sprite;
                }
            }
            count++;
        }
    }

    void onDestroyGrid()
    {
        if(prefabGameObject is null)
        {
            return;
        }
        foreach(GameObject obj in prefabGameObject)
        {
            Destroy(obj);
        }

    }
}
