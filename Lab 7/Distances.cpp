// Lab 6.8 - Student Generated Code Assignments
//
// Option 1
//
// Ahmad Tahiri #100356133

//     1 kilometer = .621 miles
//     1 mile = 1.61 kilometers

#include "stdafx.h"

#include <iostream>
#include <string>
#include <limits> 
#include <sstream> 

enum ConversionType {
    mi_to_km,
    km_to_mi
};

const double MI_PER_KM = 0.621;
const double KM_PER_MI = 1.61;

std::string convert(ConversionType t) {
    double distance, factor;
    std::string from, to;

    if ( t == mi_to_km ) {
        from = "miles", to = "kilometers", factor = KM_PER_MI;
    } else {
        from = "kilometers", to = "miles", factor = MI_PER_KM;
    }

    std::cout << "Please input the " << from << " to be converted\n";
    std::cin >> distance;

    
    std::ostringstream oss;
    oss << "\n" << distance << " " << from << " = " << (distance*factor)
        << " " << to << "\n\n";

    return oss.str();
}

int main() {
    char selection = '4';

    while (true) {
        std::cout << "Please input\n"
                     "  1  Convert miles to kilometers\n"
                     "  2  Convert kilometers to miles\n"
                     "  3  Quit\n\n";

        do {
            std::cin >> selection;
        } while( !std::cin.good() );

        switch ( selection ) {
            case '1':
                std::cout << convert(mi_to_km);
                break;
            case '2':
                std::cout << convert(km_to_mi);
                break;
            case '3':
                return 0;
            default:
                std::cerr << "**Invalid input. Please try again.**\n\n";
        }
    }


    return 0;
}
