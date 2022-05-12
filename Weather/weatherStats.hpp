

#ifndef weatherStats_hpp
#define weatherStats_hpp

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
#include <ctime>

#define RESOURCE_PATH "../Resources/"

class WeatherStatistics {
public:
    WeatherStatistics();
    bool isValidDateTime(std::string date, std::string time);
    double computeCoeff(std::string startDate, std::string startTime, std::string endDate, std::string endTime);
    
private:
    std::map<time_t, double> timeToPressure_;
    
    void loadData();
    time_t getFirstDateTime();
    time_t getLastDateTime();
    time_t convertDateTime(std::string date, std::string time);
};

#endif /* weatherStats_hpp */
