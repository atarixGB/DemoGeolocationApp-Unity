using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GPS : MonoBehaviour
{

    private int maxWait = 30;
    [SerializeField] TextMeshProUGUI[] textboxes; 

    void Update()
    {
        
    }

    private void Start()
    {
        textboxes[0].text = "Target Longitude: ";
        textboxes[1].text = "Target Latitude: ";
        textboxes[2].text = "Distance from Target: ";
        textboxes[3].text = "Current Longitude: ";
        textboxes[4].text = "Current Latitude:";
        textboxes[5].text = "Current Rotation: ";
    }

    IEnumerator GetGPSCoordinates()
    {

        if (!Input.location.isEnabledByUser)
            yield break;

        Input.location.Start();

        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        if (maxWait < 1)
        {
            Debug.Log("Timed Out");
            yield break;
        }

        if (Input.location.status == LocationServiceStatus.Failed)
        {
            Debug.Log("Unable to determine device location");
            yield break;
        } 
        else
        {
            Debug.Log("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
        }
        
        Input.location.Stop();
    }
}
