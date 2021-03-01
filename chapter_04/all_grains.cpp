/**
 * Chapter 4 Exercise 9 - Total Inventor Grains
 * @file all_grains.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief Total number of grains if you start at 1 grain on tile one and double each tile after up the 64 max squares on a ches board
*/

#include "../std_lib_facilities.h"

int main()
{
    int current_tile = 0;
    bool billion_found = false;
    bool found_int = false;
    int int_current_grains = 0;
    int int_previous_total_grains = 0;
    int int_total_grains = 0;
    double dbl_previous_total_grains = 0;
    double dbl_current_grains = 0;
    double dbl_total_grains = 0;
    while (true){
        int_current_grains = pow(2.0, current_tile);
        int_total_grains += int_current_grains;
        if (int_total_grains <= int_previous_total_grains && found_int != true){
            cout << "Tile " << current_tile << " produces the max number of grains to be held in int at " << int_previous_total_grains << "\n";
            found_int = true;
        }
        dbl_current_grains = pow(2.0, current_tile);
        dbl_total_grains += dbl_current_grains;
        if (dbl_total_grains <= dbl_previous_total_grains || isinf(dbl_total_grains) == true){
            cout << "Tile " << current_tile << " produces the max number of grains to be held in double at " << dbl_previous_total_grains << "\n";
            return 0;
        }
        current_tile++;
        int_previous_total_grains = int_total_grains;
        dbl_previous_total_grains = dbl_total_grains;
    }
    cout << "Integer sum: " << int_total_grains << "\tDouble sum: " << dbl_total_grains << "\n";
    return 0;
}