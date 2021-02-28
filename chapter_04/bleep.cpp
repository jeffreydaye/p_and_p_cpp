/**
 * Chapter 4 Exercise 1f - Bleep words
 * @file bleep.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Bleeps certain words entered into terminal
*/

#include "../std_lib_facilities.h"

int main()
{
    vector<string> bleeped = {"my", "name", "is", "jeff"};
    string word = " ";

    cout << "Please enter words and see if they pass our filter. \n";

    while(cin >> word){
        if (find(bleeped.begin(), bleeped.end(), word) == bleeped.end()){
            cout << word << "\n";
        }
        else {
            cout << "BLEEP!\n";
        }
    }
    return 0;
}