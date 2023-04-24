using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;

public class GPS : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI[] textboxLabels;

    private void Start()
    {

        textboxLabels[0].text = "Target Longitude: ";
        textboxLabels[1].text = "Target Latitude: ";
        textboxLabels[2].text = "Distance from Target: ";
        textboxLabels[3].text = "Current Longitude: ";
        textboxLabels[4].text = "Current Latitude: ";
        textboxLabels[5].text = "Current Rotation: ";

    }
    private void Update()
    {
        StartCoroutine(GetGPSCoordinates());
    }

    IEnumerator GetGPSCoordinates()
    {

        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }

        if (Input.location.isEnabledByUser)
        {
            Input.location.Start();

            if (Input.location.status == LocationServiceStatus.Failed)
            {
                print("Unable to determine device location");
                yield break;
            }
            else
            {
                textboxLabels[3].text = Input.location.lastData.longitude.ToString();
                textboxLabels[4].text = Input.location.lastData.latitude.ToString();
            }

        }

    }
}
