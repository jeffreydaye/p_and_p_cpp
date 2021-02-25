/**
 * Chapter 4 Exercise 1b - Currency Converter Switch
 * @file currency_converter_switch.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Program to convert yen, euros, poundm yuan and krone into Canadian dollars (as of February 24, 2021) using switch statements.
*/

#include "../std_lib_facilities.h"

int main()
{
    constexpr double yen_to_cad = 0.012;
    constexpr double euro_to_cad = 1.52;
    constexpr double pound_to_cad = 1.77;
    constexpr double yuan_to_cad = 0.19;
    constexpr double krone_to_cad = 0.20;
    double amount = 0;
    char currency = ' ';

    cout << "[yen = y]\n[euro = e]\n[pound = p]\n[yuan = c]\n[krone = k]\n";
    cout << "Please enter an amount of currency, followed by the currency type: ";
    cin >> amount >> currency;

    switch (currency) {
        case 'y':
            cout << amount << " " << currency << " is equal to " << amount * yen_to_cad << " Canadian Dollars.\n";
            cout << amount << " " << currency << " == " << amount * yen_to_cad << " CAD\n";
            break;
        case 'e':
            cout << amount << " " << currency << " is equal to " << amount * euro_to_cad << " Canadian Dollars.\n";
            cout << amount << " " << currency << " == " << amount * euro_to_cad << " CAD\n";
            break;
        case 'p':
            cout << amount << " " << currency << " is equal to " << amount * pound_to_cad << " Canadian Dollars.\n";
            cout << amount << " " << currency << " == " << amount * pound_to_cad << " CAD\n";
            break;
        case 'c':
            cout << amount << " " << currency << " is equal to " << amount * yuan_to_cad << " Canadian Dollars.\n";
            cout << amount << " " << currency << " == " << amount * yuan_to_cad << " CAD\n";
            break;
        case 'k':
            cout << amount << " " << currency << " is equal to " << amount * krone_to_cad << " Canadian Dollars.\n";
            cout << amount << " " << currency << " == " << amount * krone_to_cad << " CAD\n";
            break;
        default:
            cout << "I don't know what " << currency << " is yet!\n";
    }
    return 0;
}