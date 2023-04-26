using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements.Experimental;

public class UI : MonoBehaviour
{
    [Tooltip("Notifies the user when he is at the specified distance (in meters) or less from the target location.")]
    public double distanceThreshold = 10;

    public TextMeshProUGUI[] textboxLabels;
    public Image greenSquare;
    public RawImage arrow;
   
    void Start()
    {
        textboxLabels[0].text = "0";
        textboxLabels[1].text = "0";
        textboxLabels[2].text = "0";
        textboxLabels[3].text = "0";
    }

    void Update()
    {
        // Display the target location
        textboxLabels[0].text = GPS.Instance.randomCoordinates.ToString();
        
        // Display the distance from current location to target
        double distanceFromTarget = Helper.distanceBetweenTwoGPSCoordinates(
            GPS.Instance.currentCoordinates.Item1, GPS.Instance.currentCoordinates.Item2, 
            GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);

        textboxLabels[1].text = distanceFromTarget.ToString() + " m";

        if (distanceFromTarget <= distanceThreshold)
        {
            greenSquare.enabled = true;
            Handheld.Vibrate();
        } else
        {
            greenSquare.enabled = false;
        }

        // Display our current location
        textboxLabels[2].text = GPS.Instance.currentCoordinates.ToString();

        // Display the bearing from target location
        double bearing = Helper.getBearing(
            GPS.Instance.currentCoordinates.Item1, GPS.Instance.currentCoordinates.Item2, 
            GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);

        Debug.Log(string.Format("NORTH: {0}\tBEARING: {1}\tDELTA: {2}", GPS.Instance.north, bearing, GPS.Instance.north - bearing));
        arrow.transform.rotation = Quaternion.Euler(0, 0, (float) (Math.Round(GPS.Instance.north, 4) - Math.Round(bearing,2) )); // Inverted bearing to match Unity Z-axis

        if (bearing < 0)
            bearing = bearing + Helper.TOTAL_DEGREES_IN_CIRCLE;
        textboxLabels[3].text = bearing.ToString() + " °";

    }
}
