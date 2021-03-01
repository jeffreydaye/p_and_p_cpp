/**
 * Chapter 4 Exercise 6 - Number to text and back
 * @file number_text.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Convert number strings to numbers and numbers to number string from 0 to 9
*/

#include "../std_lib_facilities.h"

int main()
{
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string number = " ";
    while (cin >> number){
        if (number.size() == 1){
            cout << numbers[stoul(number)] << "\n";
        }
        else{
            if (find(numbers.begin(), numbers.end(), number) != numbers.end()){
                cout << distance(numbers.begin(), find(numbers.begin(), numbers.end(), number)) << "\n";
            }
            else{
                cout << "That's not a number I know yet!\n";
            }
        }
    }
    return 0;
}
