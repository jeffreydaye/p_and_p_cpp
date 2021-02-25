/**
 * Chapter 4 Exercise 1d - Characters and their integers with for-loop
 * @file characters_and_integers_for.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Program that prints tables of characters and their corresponding integer values using for-loops
*/

#include "../std_lib_facilities.h"

int main()
{
    for (char i = 'a'; i <= 'z'; ++i){
        cout << i << "\t\t" << int(i) << "\n";
    }
    for (char i = 'A'; i <= 'Z'; ++i){
        cout << i << "\t\t" << int(i) << "\n";
    }
    for (char i = '0'; i <= '9'; ++i){
        cout << i << "\t\t" << int(i) << "\n";
    }
    return 0;
}