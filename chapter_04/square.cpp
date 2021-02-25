/**
 * Chapter 4 Exercise 1e - Square function
 * @file square.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Calculates the square of an input integer without the '*' operator
*/

#include "../std_lib_facilities.h"

int square(int number)
{
    int sum = 0;
    for (unsigned int i = 1; i <= number; ++i){
        sum += number;
    }
    return sum;
}

int main(){
    int number = 0;
    cout << "Please enter an integer to square: ";
    cin >> number;
    cout << "The square of " << number << " is " << square(number) << "\n";
    return 0;
}