/**
 * Chapter 4 Exercise 1a - Currency Converter
 * @file currency_converter.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Program to convert yen, euros and pounds into Canadian dollars (as of February 24, 2021).
*/

#include "../std_lib_facilities.h"

int main()
{
    constexpr double yen_to_cad = 0.012;
    constexpr double euro_to_cad = 1.52;
    constexpr double pound_to_cad = 1.77;
    double amount = 0;
    string currency = " ";

    cout << "Please enter an amount of currency, followed by the currency type [yen, euro, pound]: ";
    cin >> amount >> currency;

    if (currency == "yen"){
        cout << amount << " " << currency << " is equal to " << amount * yen_to_cad << " Canadian Dollars.\n";
    }
    else if (currency == "euro"){
        cout << amount << " " << currency << " is equal to " << amount * euro_to_cad << " Canadian Dollars.\n";
    }
    else if (currency == "pound"){
        cout << amount << " " << currency << " is equal to " << amount * pound_to_cad << " Canadian Dollars.\n";
    }
    else{
        cout << "Sorry, I don't know a currency called '" << currency << "' yet!\n";
    }
    return 0;
}