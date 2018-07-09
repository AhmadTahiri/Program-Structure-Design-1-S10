// This program will calculate the area and perimeter
// of a specific rectangle.
//
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
using namespace std;

const int LENGTH = 8;
const int WIDTH = 3;

int main() {
	
	int area, perimeter;

	area = LENGTH * WIDTH;                       // formula for area
	perimeter = LENGTH + WIDTH + LENGTH + WIDTH; // formula for perimeter

	cout << "The area of the rectangle is " << area << "\n";
	cout << " The perimeter of the rectangle is " << perimeter << "\n";

	return 0;
}
