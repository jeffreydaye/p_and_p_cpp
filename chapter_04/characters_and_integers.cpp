/**
 * Chapter 4 Exercise 1c - Characters and their integers
 * @file characters_and_integerscpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Program that prints a table of characters and their corresponding integer values
*/

#include "../std_lib_facilities.h"

int main()
{

    char start = 'a';
    char stop = 'z';
    while(start <= stop){
        cout << start << "\t\t" << int(start) << "\n";
        start++;
    }
    return 0;
}