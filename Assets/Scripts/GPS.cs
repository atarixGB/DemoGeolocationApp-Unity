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
    
    private double latitude;
    private double longitude;

    private void Start()
    {
        textboxLabels[0].text = "0";
        textboxLabels[1].text = "0";
        textboxLabels[2].text = "0";
        textboxLabels[3].text = "0";

        Tuple<double,double> target = Helper.getRandomGPSCoordinates(45.482186364233655, -73.63115833826637, 90, 2);
        textboxLabels[4].text = target.ToString();

    }
    private void Update()
    {
        double distance = Helper.distanceBetweenTwoGPSCoordinates(45.482186364233655, -73.63115833826637, 45.50662296506298, -73.57023013517852);
        textboxLabels[1].text = distance.ToString();

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
                Debug.Log("Unable to determine device location");
                yield break;
            }
            else
            {
                latitude = Input.location.lastData.latitude;
                longitude = Input.location.lastData.longitude;
                textboxLabels[2].text = latitude.ToString() + ", " + longitude.ToString();
                Debug.Log("DEBUG: " + latitude.ToString() + ", " + longitude.ToString());
            }

        }

    }
}
