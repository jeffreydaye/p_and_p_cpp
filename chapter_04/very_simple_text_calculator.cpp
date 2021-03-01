/**
 * Chapter 4 Exercise 7 - Very Simple Text Calculator
 * @file very_simple_text_calculator.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief A very simple calculator that +, -, *, and / two operands as digit or text from 0 to 9
*/

#include "../std_lib_facilities.h"

int number_string_to_int(string number)
{
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (number.size() == 1){
            return stoul(number);
    }
    else{
        if (find(numbers.begin(), numbers.end(), number) != numbers.end()){
            return distance(numbers.begin(), find(numbers.begin(), numbers.end(), number));
        }
        else{
            cout << "That's not a number I know yet!\n";
            return -1;
        }
    }
    cout << "Something went wrong...\n";
    return -1;
}

int main()
{
    char operation = ' ';
    string str_number1 = " ";
    string str_number2 = " ";
    int number1 = 0;
    int number2 = 0;

    cout << "Please enter two numbers, followed by the operation you want to perform [+, -, *, /]:\n";
    while (cin >> str_number1 >> str_number2 >> operation){
        number1 = number_string_to_int(str_number1);
        number2 = number_string_to_int(str_number2);
        switch(operation){
            case '+':
                cout << "The sum of " << number1 << " and " << number2 << " is " << number1 + number2 << "\n";
                break;
            case '-':
                cout << "The difference between " << number1 << " and " << number2 << " is " << number1 - number2 << "\n";
                break;
            case '*':
                cout << "The product of " << number1 << " and " << number2 << " is " << number1 * number2 << "\n";
                break;
            case '/':
                cout << "The quotient of " << number1 << " and " << number2 << " is " << number1 / number2 << "\n";
                break;
            default:
                cout << "I don't know that operation!\n";
        }
    }
    return 0;
}