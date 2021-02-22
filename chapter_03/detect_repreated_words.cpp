/**
 * Chapter 3 Exercise 1c - Detect Repeated Words
 * @file detect_repeated_words.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Detecting repeated words (no case check)
*/

#include "../std_lib_facilities.h"

int main()
{
    string previous = " ";
    string current = " ";
    while (cin>>current){
        if (previous == current){
            cout << "repeated word: " << current << "\n";
        }
        previous = current;
    }

    return 0;
}