/**
 * Chapter 3 Exercise 2 - Miles to Kilometers
 * @file mi_to_km.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Converts miles to kilometers with prompt
*/

#include "../std_lib_facilities.h"

int main()
{
    const double mi_to_km = 1.609;
    double miles = 0;
    cout << "********** MILES -> KILOMETERS **********\n\n";
    cout << "Miles: ";
    cin >> miles;
    cout << "Kilometers: " << miles * mi_to_km << "\n";

    return 0;
}