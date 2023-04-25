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

        Tuple<double,double> target = Helper.getNewGPSCoordinate(45.499203131735904, -73.62257131469727, 33.253, 300);
        textboxLabels[0].text = target.ToString();

        double bearing = Helper.getBearing(45.499203131735904, -73.62257131469727, 45.501221536635335, -73.62068303955078);
        textboxLabels[3].text = bearing.ToString();

    }
    private void Update()
    {
        double distance = Helper.distanceBetweenTwoGPSCoordinates(45.499203131735904, -73.62257131469727, 45.501221536635335, -73.62068303955078);
        textboxLabels[1].text = distance.ToString() + " m";

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
            }

        }

    }
}
