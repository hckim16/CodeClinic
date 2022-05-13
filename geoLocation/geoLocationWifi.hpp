/**
 * GeolocationWifiPoints.hpp by Olivia Stone for Code Clinic: C++
 **/

#ifndef geoLocationWifi_hpp
#define geoLocationWifi_hpp

#include <iostream>
#include <string>
#include <list>

#include <windows.h>
#include <wlanapi.h>

#include "cJSON.h" // JSON support https://github.com/DaveGamble/cJSON

class geoLocationWifi {
public:
    it getWifiNetworks();
    char *buildRequestJSON();
    
private:
    struct wifiAP {
        char macAddress[44];
        long signalStrength;
    }
    
    std::list<wifiAP> wifiAPlist_;
}

#endif /* geoLocationWifi_hpp */
