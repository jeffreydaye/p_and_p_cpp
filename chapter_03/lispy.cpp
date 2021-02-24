/**
 * Chapter 3 Exercise 10 - Perform basic operations "lisp-like"
 * @file lispy.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Simple program to take an operator followed by two operands and perform the related operators operation.
*/

#include "../std_lib_facilities.h"

int main()
{
    string operation = " ";
    double operand1 = 0;
    double operand2 = 0;

    cout << "Please enter an operator (+, -, *, /) or specify an operation name ('plus', 'minus', 'mul', 'div') followed by two operands to perform the operation: \n";

    while (cin >> operation >> operand1 >> operand2){
        if (operation == "+" || operation == "plus"){
            cout << operand1 + operand2 << "\n";
        }
        else if (operation == "-" || operation == "minus"){
            cout << operand1 - operand2 << "\n";
        }
        else if (operation == "*" || operation == "mul"){
            cout << operand1 * operand2 << "\n";
        }
        else if (operation == "/" || operation == "div"){
            cout << operand1 / operand2 << "\n";
        }
    }
    return 0;
}