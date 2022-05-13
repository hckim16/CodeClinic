

#ifndef geoLocation_hpp
#define geoLocation_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>

#include "cJSON.h"          // JSON support https://github.com/DaveGamble/cJSON
//#include "curl\curl.h"      // curl support https://curl.haxx.se/
#include <curl/curl.h>

#define GEO_API_BASE_URL "https://www.googleapis.com/geolocation/v1/geolocate?key="
#define GEO_API_KEY "AIzaSyBbzOO4hPYLPAiVqI1tWQM08invQaarL98"
#define GEO_API_REQUEST_URL GEO_API_BASE_URL GEO_API_KEY

class geoLocation {
public:
    void getLocation(char *jsonPayLoad);
    void printLocationInfo(char *response);

    
private:
    struct MemoryStruct {
        char *memory;
        size_t size;
    };
    
    static size_t writeMemoryCallback (void *contents, size_t size, size_t nmemb, void *userp);
};

#endif /* geoLocation_hpp */
