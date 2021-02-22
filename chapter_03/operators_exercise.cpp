/**
 * Chapter 3 Exercise 1b - Operators Exercise
 * @file operators_exercise.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Exploring the results of using different operators
*/

#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter an integer value: \n";
    int int_n = 0;
    cin >> int_n;
    double float_n = int_n * 1.0;
    cout << "OPR\t|\tINT\t|\tFLOAT\n"
    << "n+1\t|\t" << int_n + 1 << "\t|\t" << float_n + 1 <<"\n"
    << "n*3\t|\t" << int_n * 3 << "\t|\t" << float_n * 3 <<"\n"
    << "n+n\t|\t" << int_n + int_n << "\t|\t" << float_n + float_n << "\n"
    << "n*n\t|\t" << int_n * int_n << "\t|\t" << float_n * float_n << "\n"
    << "n/2\t|\t" << int_n / 2 << "\t|\t" << float_n / 2 << "\n"
    << "sqrt(n)\t|\t" << sqrt(int_n) << "\t|\t" << sqrt(float_n) << "\n"
    << "\n";

    return 0;
}