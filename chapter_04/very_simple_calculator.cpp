/**
 * Chapter 4 Exercise 5 - Very Simple Calculator
 * @file very_simple_calculator.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief A very simple calculator that +, -, *, and / two operands
*/

#include "../std_lib_facilities.h"

int main()
{
    char operation = ' ';
    double number1 = 0.0;
    double number2 = 0.0;

    cout << "Please enter two numbers, followed by the operation you want to perform [+, -, *, /]:\n";
    while (cin >> number1 >> number2 >> operation){
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