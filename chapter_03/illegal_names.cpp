/**
 * Chapter 3 Exercise 3 - Illegal Names
 * @file illegal_names.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Code to explore name warnings in compiler. 
*/

#include "../std_lib_facilities.h"

int main()
{
    int double = 0;
    bool true = false;
    int const bool = 1;
    int 45 = 0;
    bool const = false;
    bool up == false;

    return 0;
}