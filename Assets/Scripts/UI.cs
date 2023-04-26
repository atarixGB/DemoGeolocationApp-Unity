using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UI : MonoBehaviour
{
    const int DEFAULT_ROUND_VALUE = 2;

    [Tooltip("Notifies the user when he is at the specified distance (in meters) or less from the target location.")]
    public float distanceThreshold;
    [Tooltip("Number of decimals displayed for GPS coordinates")]
    public int numberOfDecimals;

    public TextMeshProUGUI[] textboxLabels;
    public Image greenSquare;
    public RawImage arrow;
   
    void Start() {
        textboxLabels[0].text = "(0,0)";
        textboxLabels[1].text = "0.0";
        textboxLabels[2].text = "(0,0)";
        textboxLabels[3].text = "0 °";
    }

    void Update() {

        displayTargetLocation();

        displayDistanceFromTarget();

        displayCurrentLocation();

        rotateArrow();

        displayCurrentDeviceOrientation();
    }

    private void displayTargetLocation() {
        textboxLabels[0].text = string.Format("({0}, {1})",
            Math.Round(GPS.Instance.randomCoordinates.Item1, numberOfDecimals),
            Math.Round(GPS.Instance.randomCoordinates.Item2, numberOfDecimals));
    }

    private void displayDistanceFromTarget() {
        double distanceFromTarget = Helper.distanceBetweenTwoGPSCoordinates(
            GPS.Instance.currentCoordinates.Item1, GPS.Instance.currentCoordinates.Item2,
            GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);

        textboxLabels[1].text = string.Format("{0} m", Math.Round(distanceFromTarget, DEFAULT_ROUND_VALUE));

        toggleGreenSquare(distanceFromTarget);
    }

    private void displayCurrentLocation() {
        textboxLabels[2].text = string.Format("({0}, {1})",
            Math.Round(GPS.Instance.currentCoordinates.Item1, numberOfDecimals),
            Math.Round(GPS.Instance.currentCoordinates.Item2, numberOfDecimals));
    }

    private void rotateArrow() {
        double bearing = Helper.getBearing(
            GPS.Instance.currentCoordinates.Item1, GPS.Instance.currentCoordinates.Item2,
            GPS.Instance.randomCoordinates.Item1, GPS.Instance.randomCoordinates.Item2);

        arrow.transform.rotation = Quaternion.Euler(0, 0, (float)(GPS.Instance.north - bearing)); // Inverted bearing to match Unity Z-axis

    }

    private void  displayCurrentDeviceOrientation()
    {
        textboxLabels[3].text = string.Format("{0} °", Math.Round(GPS.Instance.attitude.z, DEFAULT_ROUND_VALUE));
    }

    private void toggleGreenSquare(double distanceFromTarget)
    {
        if (distanceFromTarget <= distanceThreshold) {
            greenSquare.enabled = true;
            Handheld.Vibrate();
        } else {
            greenSquare.enabled = false;
        }
    }
}
