/**
 * Chapter 4 Exercise 3 - Stats Between Cities
 * @file between_cities.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Collect a list of distances between cities and provide the smallest, greatest, sum and mean
*/

#include "../std_lib_facilities.h"

int main()
{
    vector<double> distances = {};
    double sum = 0;
    double distance = 0;
    unsigned int number_of_distances = 0;
    double greatest = 0;
    double smallest = 0;
    while (cin >> distance){
        distances.push_back(distance);
        sum += distance;
        if (distance >= greatest){
            greatest = distance;
        }
        if (distance <= smallest || number_of_distances == 0){
            smallest = distance;
        }
        number_of_distances++;
    }
    cout << "\nTotal distance: " << sum
    << "\nSmallest: " << smallest
    << "\nGreatest: " << greatest
    << "\nMean: " << sum / number_of_distances << "\n";

    return 0;
}