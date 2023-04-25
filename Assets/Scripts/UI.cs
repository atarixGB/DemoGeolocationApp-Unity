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

        // Display the new generated coordinates (our target location)
        textboxLabels[0].text = GPS.Instance.randomCoordinates.ToString();
        
        // Display the distance from current location to target
        double distance = Helper.distanceBetweenTwoGPSCoordinates(GPS.Instance.latitude, GPS.Instance.longitude, GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);
        textboxLabels[1].text = distance.ToString() + " m";

        if (distance <= distanceThreshold)
        {
            greenSquare.enabled = true;
            Handheld.Vibrate();
        } else
        {
            greenSquare.enabled = false;
        }

        // Display our current location
        textboxLabels[2].text = string.Format("({0}, {1})", GPS.Instance.latitude.ToString(), GPS.Instance.longitude.ToString());

        // Display the bearing from target location
        double bearing = Helper.getBearing(GPS.Instance.latitude, GPS.Instance.longitude, GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);

        if (bearing < 0)
            bearing = bearing + Helper.TOTAL_DEGREES;

        textboxLabels[3].text = bearing.ToString() + " °";

        arrow.transform.rotation = Quaternion.Euler(0, 0, (float) -bearing); // Inverted z to match Unity's coordinate system


    }
}
