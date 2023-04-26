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

    [Tooltip("Use the Magnetic North if checked.")]
    public bool isMagneticNorth = true;

    [Tooltip("Upon's app initialization, spawn the new coordinates at specified distance.")]
    public double distanceFromNewPoint = 200d;
    
    public Tuple<double, double> randomCoordinates;
    public Tuple<double, double> currentCoordinates;
    [HideInInspector] public double north = 0d;

    private bool areCoordinatesEmpty = true;
    private bool areRandomCoordinatesSet = false;
    private double randomBearing;

    private System.Random random;

    private void Start()
    {
        Instance = this;

        random = new System.Random(Helper.getElapsedSecondsFromUnixEpoch());
        randomBearing = random.Next(Helper.TOTAL_DEGREES_IN_CIRCLE + 1);
    }
    private void Update()
    {
        StartCoroutine(GetGPSCoordinates());

        if (!areCoordinatesEmpty && !areRandomCoordinatesSet)
        {
            // Upon app's initialization, generate a new coordinate point with distance specified in the editor and random bearing angle
            randomCoordinates = Helper.getNewGPSCoordinate(currentCoordinates.Item1, currentCoordinates.Item2, randomBearing, distanceFromNewPoint);
            areRandomCoordinatesSet = true;
        }
    }

    private void OnDestroy()
    {
        Input.location.Stop();
        Debug.Log("App closed");
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
            Input.location.Start(5.0f,1.0f);
            Input.compass.enabled = true;

            if (Input.location.status == LocationServiceStatus.Failed)
            {
                Debug.Log("Unable to determine device location");
                yield break;
            }
            else
            {
                currentCoordinates = new Tuple<double, double>(Input.location.lastData.latitude, Input.location.lastData.longitude);
                Debug.Log(string.Format("TIME: {0}\tLAT: {1}\tLONG: {2}\tACC: {3}", Input.location.lastData.timestamp, currentCoordinates.Item1, currentCoordinates.Item2, Input.location.lastData.horizontalAccuracy));

                if (isMagneticNorth)
                {
                    north = Input.compass.magneticHeading;
                } else
                {
                    north = Input.compass.trueHeading;
                }
                
                if (currentCoordinates.Item1 != 0d && currentCoordinates.Item2 != 0d)
                {
                    areCoordinatesEmpty = false;
                }
            }

        }

    }
}
