/**
 * Chapter 3 Exercise 5 - Two Floating Point Operations
 * @file two_floating_point_operations.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Code to explore the various floating point operations on two user selected values. 
*/

#include "../std_lib_facilities.h"

int main()
{
    double val1 = 0;
    double val2 = 0;
    cout << "Please enter two integer values separated by a space: ";
    cin >> val1 >> val2;
    cout << "SMALLEST: " << min(val1, val2) << "\n";
    cout << "LARGEST: " << max(val1, val2) << "\n";
    cout << "SUM: " << val1 + val2 << "\n";
    cout << "DIFFERENCE: " << val1 - val2 << "\n";
    cout << "PRODUCT: " << val1 * val2 << "\n";
    if (val2 == 0){
        if (val1 >= 0){
            cout << "RATIO: inf\n";
        }
        else{
            cout << "RATIO: -inf\n";
        }
    }
    else{
        cout << "RATIO: " << val1/val2 << ":1\n";
    }
    return 0;
}