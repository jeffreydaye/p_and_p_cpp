/**
 * Chapter 3 Exercise 8 - Even Check
 * @file string_sort.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Checking if an integer is even or odd. 
*/

#include "../std_lib_facilities.h"

int main()
{
    int value = 0;
    cout <<"********** INTEGER EVEN CHECK **********\n\n";
    cout << "Please enter the integer you would like to check: ";
    cin >> value;
    cout << "The number " << value << " is ";
    if (value % 2 == 0){
        cout << "even!\n";
    }
    else{
        cout << "odd!\n";
    }

    return 0;
}