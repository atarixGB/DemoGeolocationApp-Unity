using System;
using Unity.VisualScripting;
using UnityEngine;

public static class Helper
{
    const double EARTH_RADIUS = 6371000; // [meters]

    public static double degreesToRadians(double valueInDegrees)
    {
        return valueInDegrees * (Math.PI) / 180;
    }

    public static double radiansToDegrees(double valueInRadians)
    {
        return valueInRadians * 180 / Math.PI;
    }

    /** Great-circle distance between two points
    *   http://www.movable-type.co.uk/scripts/latlong.html
    */
    public static Tuple<double, double> getNewGPSCoordinate(double lat1, double long1, double bearing, double distance)
    {
        bearing = degreesToRadians(bearing);
        lat1 = degreesToRadians(lat1);
        long1 = degreesToRadians(long1);
        double lat2 = Math.Asin(Math.Sin(lat1) * Math.Cos(distance / EARTH_RADIUS) + Math.Cos(lat1) * Math.Sin(distance / EARTH_RADIUS) * Math.Cos(bearing));
        double long2 = long1 + Math.Atan2(Math.Sin(bearing) * Math.Sin(distance / EARTH_RADIUS) * Math.Cos(lat1), Math.Cos(distance / EARTH_RADIUS) - Math.Sin(lat1) * Math.Sin(lat2));
        return new Tuple<double, double>(radiansToDegrees(lat2), radiansToDegrees(long2));
    }

    /** Destination point along great-circle given distance and bearing from start point
     *  http://www.movable-type.co.uk/scripts/latlong.html
     */
    public static double distanceBetweenTwoGPSCoordinates(double lat1, double long1, double lat2, double long2)
    {
        double deltaLat = degreesToRadians(lat2 - lat1);
        double deltaLong = degreesToRadians(long2 - long1);
        double radicand = Math.Pow(Math.Sin(deltaLat / 2), 2) + Math.Cos(degreesToRadians(lat1)) * Math.Cos(degreesToRadians(lat2)) * Math.Pow(Math.Sin(deltaLong / 2), 2);
        double angularDistance = 2 * Math.Atan2(Math.Sqrt(radicand), Math.Sqrt(1 - radicand));
        double distance = EARTH_RADIUS * angularDistance;
        return distance;
    }

    /** Calculating Bearing or Heading angle between two points
     *  https://www.igismap.com/formula-to-find-bearing-or-heading-angle-between-two-points-latitude-longitude/
     */
    public static double getBearing(double lat1, double long1, double lat2, double long2) 
    {
        lat1 = degreesToRadians(lat1);
        long1 = degreesToRadians(long1);
        lat2 = degreesToRadians(lat2);
        long2 = degreesToRadians(long2);

        double x = Math.Cos(lat2) * Math.Sin(long2-long1);
        double y = Math.Cos(lat1) * Math.Sin(lat2) - Math.Sin(lat1) * Math.Cos(lat2) * Math.Cos(long2 - long1);
        double bearing = Math.Atan2(x, y);

        return radiansToDegrees(bearing);
    }

}
