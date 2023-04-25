using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;

public class GPS : MonoBehaviour
{
    public static GPS Instance { get; set; } // Enable access everywhere in the app

    public double latitude = 0d;
    public double longitude = 0d;
    public double distance = 200d;
    public Tuple<double, double> randomCoordinates;

    private bool areCoordinatesEmpty = true;
    private bool areRandomCoordinatesSet = false;
    private double randomBearing;

    private System.Random random;

    private void Start()
    {
        Instance = this;
        DontDestroyOnLoad(gameObject);

        random = new System.Random(Helper.getElapsedSecondsFromUnixEpoch());
        randomBearing = random.Next(Helper.TOTAL_DEGREES);
    }
    private void Update()
    {
        StartCoroutine(GetGPSCoordinates());

        if (!areCoordinatesEmpty && !areRandomCoordinatesSet)
        {
            randomCoordinates = Helper.getNewGPSCoordinate(latitude, longitude, randomBearing, distance);
            areRandomCoordinatesSet = true;
        }
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
                
                if (latitude != 0d && longitude != 0d)
                {
                    areCoordinatesEmpty = false;
                }
            }

        }

    }
}
