

#include <iostream>
#include <string>

#include "weatherStats.hpp"

using namespace std;

int main() {

    WeatherStatistics stats;
    
    // request start date/time from user
    string startDate, startTime;
    cout << endl << "Enter START DATE as yyyy_mm_dd: ";
    cin >> startDate;
    cout << endl << "Enter START TIME as hh:mm:ss (24-hour): ";
    cin >> startTime;
    
    if (!stats.isValidDateTime(startDate, startTime)) return 1;
    
    // request end date/time from user
    string endDate, endTime;
    cout << endl << "Enter END DATE as yyyy_mm_dd: ";
    cin >> endDate;
    cout << endl << "Enter START TIME as hh:mm:ss (24-hour): ";
    cin >> endTime;
    
    if (!stats.isValidDateTime(endDate, endTime)) return 1;
    
    double coeff = stats.computeCoeff(startDate, startTime, endDate, endTime);
    
    cout << endl << "Coefficient: " << coeff * 24 * 60 * 6-0 << " inHg/day" << endl;
    
    // determin if it's sunny or stormy
    
    if (coeff < 0) cout << "Stormy conditions... Looks like you might need an umbrella!" << endl;
    else cout << "Sunny conditions... Don't forget your sunscreen!" << endl;
    
    return 0;
}
