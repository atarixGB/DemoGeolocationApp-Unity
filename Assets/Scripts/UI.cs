using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI[] textboxLabels;


    // Start is called before the first frame update
    void Start()
    {
        textboxLabels[0].text = "0";
        textboxLabels[1].text = "0";
        textboxLabels[2].text = "0";
        textboxLabels[3].text = "0";

        Tuple<double, double> target = Helper.getNewGPSCoordinate(45.499203131735904, -73.62257131469727, 33.253, 300);
        textboxLabels[0].text = target.ToString();

        double distance = Helper.distanceBetweenTwoGPSCoordinates(45.499203131735904, -73.62257131469727, 45.501221536635335, -73.62068303955078);
        textboxLabels[1].text = distance.ToString() + " m";

        double bearing = Helper.getBearing(45.499203131735904, -73.62257131469727, 45.501221536635335, -73.62068303955078);
        textboxLabels[3].text = bearing.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        textboxLabels[2].text = string.Format("({0},{1})", GPS.Instance.latitude.ToString(), GPS.Instance.longitude.ToString());
    }
}
