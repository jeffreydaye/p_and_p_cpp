/**
 * Chapter 3 Exercise 6 - Sort Three Integers
 * @file numerical_sort.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Sorting 3 integers from least to greatest. 
*/

#include "../std_lib_facilities.h"

int main ()
{
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    cout << "Please enter three (3) integer values separated by spaces: ";
    cin >> val1 >> val2 >> val3;
    if (val1 <= val2 && val1 <= val3){
        cout << val1 << ", ";
        if (val2 <= val3){
            cout << val2 << ", " << val3;
        }
        else{
            cout << val3 << ", " << val2;
        }
    }
    else if (val2 <= val1 && val2 <= val3){
        cout << val2 << ", ";
        if (val1 <= val3){
            cout << val1 << ", " << val3;
        }
        else{
            cout << val3 << ", " << val1;
        }
    }
    else{
        cout << val3 << ", ";
        if (val1 <= val2){
            cout << val1 << ", " << val2;
        }
        else{
            cout << val2 << ", " << val1;
        }
    }
    cout << "\n";
    return 0;
}