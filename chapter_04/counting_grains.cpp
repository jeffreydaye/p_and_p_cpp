/**
 * Chapter 4 Exercise 8 - Counting Grains Owed by an Ignorant Emperor
 * @file counting_grains.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief How many chess tiles needed to get 1,000, 1,000,000, and 1,000,000,000 grains of rice if you start with one grain on tile one and double each tile after
*/

#include "../std_lib_facilities.h"

int main()
{
    constexpr int one_thousand = 1000;
    int current_tile = 0;
    constexpr int one_million = 1000000;
    constexpr int one_billion = 1000000000;
    bool billion_found = false;
    int current_grains = 0;
    int total_grains = 0;
    while (billion_found == false){
        current_grains = pow(2.0, current_tile);
        if ((current_grains + total_grains) >= one_thousand && total_grains < one_thousand){
            cout << current_tile + 1 << " tiles needed for " << one_thousand << " or more grains!\n";
        }
        if ((current_grains + total_grains) >= one_million && total_grains < one_million){
            cout << current_tile + 1 << " tiles needed for " << one_million << " or more grains!\n";
        }
        if ((current_grains + total_grains) >= one_billion && total_grains < one_billion){
            cout << current_tile + 1 << " tiles needed for " << one_billion << " or more grains!\n";
            billion_found = true;
        }
        total_grains += current_grains;
        current_tile++;
    }
    return 0; 
}