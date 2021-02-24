/**
 * Chapter 3 Exercise 9 - Word to Integer
 * @file word_to_int.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Convert a word into its corresponding integer. 
*/

#include "../std_lib_facilities.h"

int main()
{
    string number = "";
    cout << "Please spell out a number: \n";
    while (cin >> number){
        if (number == "one"){
            cout << "1\n";
        }
        else if (number == "two"){
            cout << "2\n";
        }
        else if (number == "three"){
            cout << "3\n";
        }
        else if (number == "four"){
            cout << "4\n";
        }
        else{
            cout << "I don't know that number yet!\n";
        }
    }
    return 0;
}