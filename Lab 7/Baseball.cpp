// Lab 6.8 - Student Generated Code Assignments
// Option 2
//
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <iomanip>

unsigned getWins();
unsigned getLosses();
float calcPercentage( unsigned, unsigned );

int main() {
    std::cout << std::fixed << std::setprecision(2)
              << "The percentage of wins is "
              << calcPercentage( getLosses(), getWins() ) << "%\n";

    return 0;
}

unsigned getWins() {
    unsigned w;
    std::cout << "Please input the number of wins\n";
    std::cin >> w;
    return w;
}

unsigned getLosses() {
    unsigned l;
    std::cout << "Please input the number of losses\n";
    std::cin >> l;
    return l;
}

float calcPercentage( unsigned l, unsigned w ) {
    return ( static_cast<float>(w) / (w+l) ) * 100.0;
}
