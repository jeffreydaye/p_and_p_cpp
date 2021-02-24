/**
 * Chapter 3 Exercise 11 - Coin Counter
 * @file coin_counter.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Program to count a users coins and report their total.
*/

#include "../std_lib_facilities.h"

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int loonies = 0;
    int toonies = 0;
    int sum = 0;

    cout << "********** COIN COUNTER **********\n\n";

    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "How many nickels do you have? ";
    cin >> nickels;
    cout << "How many dimes do you have? ";
    cin >> dimes;
    cout << "How many quarters do you have? ";
    cin >> quarters;
    cout << "How many loonies do you have? ";
    cin >> loonies;
    cout << "How many twonies do you have? ";
    cin >> toonies;
    
    sum += pennies;
    sum += (nickels * 5);
    sum += (dimes * 10);
    sum += (quarters * 25);
    sum += (loonies * 100);
    sum += (toonies * 200);

    cout << "\nYou have " << pennies << " penn";
    if (pennies == 1){ cout << "y.\n";}
    else { cout << "ies.\n";}

    cout << "You have " << nickels << " nickel";
    if (nickels == 1){ cout << ".\n";}
    else { cout << "s.\n";}

    cout << "You have " << dimes << " dime";
    if (dimes == 1){ cout << ".\n";}
    else { cout << "s.\n";}

    cout << "You have " << quarters << " quarter";
    if (quarters == 1){ cout << ".\n";}
    else { cout << "s.\n";}

    cout << "You have " << loonies << " loonie";
    if (loonies == 1){ cout << ".\n";}
    else { cout << "s.\n";}

    cout << "You have " << toonies << " toonie";
    if (pennies == 1){ cout << ".\n";}
    else { cout << "s.\n";}

    cout << "\nThe value of all of your coins is $" << sum / 100 << "." << sum % 100 << ".\n";

    return 0;
}