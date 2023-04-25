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

    public double latitude;
    public double longitude;

    [SerializeField] TextMeshProUGUI[] textboxLabels;

    private void Start()
    {
        Instance = this;
        DontDestroyOnLoad(gameObject);
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
                Debug.Log("Unable to determine device location");
                yield break;
            }
            else
            {
                latitude = Input.location.lastData.latitude;
                longitude = Input.location.lastData.longitude;
            }

        }

    }
}
