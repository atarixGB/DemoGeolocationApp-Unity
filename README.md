# GeolocationApp
This is a prototype for a mobile geolocation app developed in Unity. The app generates a point of interest (gps coordinates) 200m away from the user. It displays the
direction to the point with an arrow (like a compass) and vibrates when the user arrives within 10m from the point.

## Notes
In the Editor, you can change the value of these variables:

For the GPS script (attached to the GPS component)
- __`isMagneticNorth`__ : Use the Magnetic North if checked.
- __`NewCoordinatesDistance`__ : Upon's app initialization, spawn the new coordinates at specified distance (in meters).

For the UI script (attached to the Canvas component)
- __`distanceThreshold`__ : Notifies the user when he is at the specified distance (in meters) or less from the target location.
- __`numberOfDecimals`__ : Number of decimals displayed for GPS coordinates

### Android version
Available on the `dev` branch.
The __`.apk`__ file is provided at the root.

### iOS version
Available on the `dev-macos` branch.
The __`Unity-Iphone.xcodeproj`__ and all related files are provided in the `/build_macos` folder.

## References
To compute GPS coordinates-related info, these references were used.

> http://www.movable-type.co.uk/scripts/latlong.html

> https://www.igismap.com/formula-to-find-bearing-or-heading-angle-between-two-points-latitude-longitude/