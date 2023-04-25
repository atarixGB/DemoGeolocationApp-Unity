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
    [SerializeField] TextMeshProUGUI[] textboxLabels;
    public  Image greenSquare;
    double randomBearing;

    // Start is called before the first frame update
    void Start()
    {
        textboxLabels[0].text = "0";
        textboxLabels[1].text = "0";
        textboxLabels[2].text = "0";
        textboxLabels[3].text = "0";

        System.Random random = new System.Random(Helper.getElapsedSecondsFromUnixEpoch());
        randomBearing = random.Next(361);


    }

    // Update is called once per frame
    void Update()
    {
        textboxLabels[0].text = GPS.Instance.randomCoordinates.ToString();
        
        double distance = Helper.distanceBetweenTwoGPSCoordinates(GPS.Instance.latitude, GPS.Instance.longitude, GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);
        textboxLabels[1].text = distance.ToString() + " m";

        if (distance <= 10)
        {
            greenSquare.enabled = true;
        } else
        {
            greenSquare.enabled = false;
        }

        textboxLabels[2].text = string.Format("({0}, {1})", GPS.Instance.latitude.ToString(), GPS.Instance.longitude.ToString());

        double bearing = Helper.getBearing(GPS.Instance.latitude, GPS.Instance.longitude, GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);
        textboxLabels[3].text = bearing.ToString() + " °";
    }
}
