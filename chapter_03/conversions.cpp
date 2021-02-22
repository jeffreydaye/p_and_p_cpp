/**
 * Chapter 3 Exercise 1e - Detect Repeated Words
 * @file conversions.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Showing the conversions of different values
*/

#include "../std_lib_facilities.h"

int main()
{
    double d = 0;
    while (cin >> d){
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d
        << " i==" << i
        << " i2==" << i2
        << " char(" << c << ")\n";
    }

    return 0;
}