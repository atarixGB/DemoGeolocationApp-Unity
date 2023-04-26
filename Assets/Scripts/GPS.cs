using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Android;

public class GPS : MonoBehaviour
{
    public static GPS Instance { get; set; } // Enable access everywhere in the app

    [Tooltip("Use the Magnetic North if checked.")]
    public bool isMagneticNorth;
    [Tooltip("Upon's app initialization, spawn the new coordinates at specified distance (in meters).")]
    public double NewCoordinatesDistance;
    
    public Tuple<double, double> randomCoordinates;
    public Tuple<double, double> currentCoordinates;
    [HideInInspector] public Vector3 attitude;
    [HideInInspector] public double north = 0d;

    private bool areCoordinatesEmpty = true;
    private bool areRandomCoordinatesSet = false;
    private double randomBearing;

    private System.Random random;

    private void Start() {
        Instance = this;

        random = new System.Random(Helper.getElapsedSecondsFromUnixEpoch());
        randomBearing = random.Next(Helper.NB_DEGREES_IN_CIRCLE + 1);

        Input.gyro.enabled = true;
    }
    private void Update() {
        StartCoroutine(getGPSCoordinates());

        if (!areCoordinatesEmpty && !areRandomCoordinatesSet) {
            // Upon app's initialization, generate a new coordinate point with distance specified in the editor and random bearing angle
            randomCoordinates = Helper.getNewGPSCoordinate(currentCoordinates.Item1, currentCoordinates.Item2, randomBearing, NewCoordinatesDistance);
            areRandomCoordinatesSet = true;
        }
    }

    private void OnDestroy() {
        Input.location.Stop();
        Input.compass.enabled = false;
        Input.gyro.enabled = false;
    }

    IEnumerator getGPSCoordinates() {

        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation)) {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }

        if (Input.location.isEnabledByUser) {
            Input.location.Start(5.0f,1.0f);
            Input.compass.enabled = true;

            if (Input.location.status == LocationServiceStatus.Failed) {
                Debug.Log("Unable to determine device location");
                yield break;
            } else {
                currentCoordinates = new Tuple<double, double>(Input.location.lastData.latitude, Input.location.lastData.longitude);
                attitude = Input.gyro.attitude.eulerAngles;
                
                Debug.Log(string.Format("TIME: {0}\tLAT: {1}\tLONG: {2}\tACC: {3}\tGYRO: {4}", 
                    Input.location.lastData.timestamp, 
                    currentCoordinates.Item1, 
                    currentCoordinates.Item2, 
                    Input.location.lastData.horizontalAccuracy,
                    Input.gyro.attitude));

                if (isMagneticNorth) {
                    north = Input.compass.magneticHeading;
                } else {
                    north = Input.compass.trueHeading;
                }
                
                if (currentCoordinates.Item1 != 0d && currentCoordinates.Item2 != 0d) {
                    areCoordinatesEmpty = false;
                }
            }
        }

    }
}
