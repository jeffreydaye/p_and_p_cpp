/**
 * Chapter 4 Exercise 2 - Bleep words
 * @file median.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Calculate the median of a sequence
*/

#include "../std_lib_facilities.h"

int main()
{
    double number = 0;
    vector<double> numbers = {};
    for (double number; cin >> number;){
        numbers.push_back(number);
    }
    sort(numbers.begin(), numbers.end());
    for (unsigned int i = 0; i < numbers.size(); ++ i){
        cout << numbers[i] << ", ";
    }
    if (numbers.size() % 2 != 0){
        cout << "\nThe median value is: " << numbers[numbers.size()/2] << "\n";
    }
    else {
        cout << "\nThe median value is: " << (numbers[numbers.size()/2] + numbers[(numbers.size()/2) - 1]) / 2 << "\n";
    }
    return 0;
}