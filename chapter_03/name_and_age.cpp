/**
 * Chapter 3 Exercise 1a - Name and Age
 * @file name_and_age.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Print a users name and age in years & months
*/

#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name = "John";
    double age = 0;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (age " << age << " year(s) OR " << age * 12 << " month(s))\n";

    return 0;
}