// Kilotmiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	float k = 0;

	// input (in km).
	cout << "Please input the number of kilometers you wish to be converted "
		"into miles."
		<< endl << endl;
	cin >> k;

	// number of kilometers in miles.
	cout << endl
		<< k << " kilometers is " << (k * 0.621371192) << " miles."
		<< endl << endl;

	system("PAUSE");
	return 0;
}