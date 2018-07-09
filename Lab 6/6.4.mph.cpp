// Lab 6.4 
// Option 2
//
//Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <iomanip>
using namespace std;

cin;
cout;
fixed;
setprecision;

void calculateMPH( double miles, double hours, double& milesPerHour );

int main() {
	double mi, hr, speed;
	
	cout << "Please input the miles traveled\n";
	cin >> mi;
	cout << "Please input the hours traveled\n";
	cin >> hr;
	
	calculateMPH( mi, hr, speed );
	
	cout << "Your speed is " << fixed << setprecision(2) << speed
	     << " miles per hour\n";

	return 0;
}

void calculateMPH( double miles, double hours, double& milesPerHour) {
	milesPerHour = miles / hours;
}
