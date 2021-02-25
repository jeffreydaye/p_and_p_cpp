/**
 * Chapter 4 Drill - Unit Converter
 * @file cunit_converter.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Program to take in a user input and provide useful conversions.
*/

#include "../std_lib_facilities.h"

bool check_almost_equal(double num1, double num2)
{
    constexpr double difference = 1.0/100;
    if (abs(num1 - num2) < difference){
        return true;
    }
    return false;
}

double convert_to_meters(double number, string unit)
{
    constexpr double m_to_cm = 100;
    constexpr double in_to_cm = 2.54;
    constexpr double ft_to_in = 12;
    constexpr double cm_to_m = 1/m_to_cm;
    constexpr double in_to_m = in_to_cm * cm_to_m;
    constexpr double ft_to_m = ft_to_in * in_to_m;

    if (unit == "in"){
        return number * in_to_m;
    }
    else if (unit == "ft"){
        return number * ft_to_m;
    }
    else if (unit == "cm"){
        return number * cm_to_m;
    }
    else{
        return number;
    }
}

int main()
{
    vector<double> numbers = {};
    double sum = 0;
    double values_entered = 0;
    double number = 0;
    string unit = " ";
    double smallest = 0;
    double largest = 0;
    char terminator = ' ';
    while ((cin >> number >> unit) && (terminator != '|')){
        if (unit == "m"){
            numbers.push_back(number);
            sum += number;
        }
        else if (unit == "cm"){
            number = convert_to_meters(number, unit);
            numbers.push_back(number);
            sum += number;
        }
        else if (unit == "in"){
            number = convert_to_meters(number, unit);
            numbers.push_back(number);
            sum += number;
        }
        else if (unit == "ft"){
            number = convert_to_meters(number, unit);
            numbers.push_back(number);
            sum += number;
        }
        else{
            cout << "That's not a valid unit or number!\n";
            continue;
        }
        if (number > largest || largest == 0){
            largest = number;
        }
        else if (number < smallest || smallest == 0){
            smallest = number;
        }
        values_entered++;
        unit = " ";
    }
    cout << "The largest value entered is: " << largest << "m\n";
    cout << "The smallest value entered is: " << smallest << "m\n";
    cout << "The sum of the values entered is: " << sum << "m\n";
    cout << "The number of values entered is: " << values_entered << "\n";
    cout << "The following are the values entered in meters: \n";
    sort(numbers.begin(), numbers.end());
    for (unsigned int i = 1; i < numbers.size(); ++i){
        cout << " | " << numbers[i - 1];
        if (i % 8 == 0){
            cout << " | \n";
        } 
    }
    cout << "\n";
    return 0;
}