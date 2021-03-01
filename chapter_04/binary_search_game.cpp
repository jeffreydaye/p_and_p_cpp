/**
 * Chapter 4 Exercise 4 - Numbers Guessing Game (Binary Search)
 * @file binary_search_game.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief A number guessing game using binary search
*/

#include "../std_lib_facilities.h"

int main()
{
    int question_limit = 7;
    char response = ' ';
    int question_count = 0;
    int number_low = 1;
    int number_high = 100;
    int answer = 0;
    while(question_count < question_limit){
        answer = number_low + (number_high - number_low) / 2;
        cout << "Is your number less than " << answer << "?\n";
        cin >> response;
        if (response == 'y'){
            number_high = answer - 1;
            answer -= 1;
        }
        else if (response == 'n'){
            number_low = answer;
            answer += 1;
        }
        else{
            "Please response y/n!\n";
        }
        cout << "HIGH: " << number_high << "\tLOW: " << number_low << "\tANSWER: " << answer <<"\n";
        ++question_count;
    }
    cout << "The answer is " << answer << "!\n";
    return 0;
}