// 5.6 Opt1.cpp : Defines the entry point for the console application.
//Ahmad Tahiri #100356133

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int NUM_OPTIONS = 4; 

							  
	const char* drink[NUM_OPTIONS] = { "Coffee", "Tea", "Coke", "Orange Juice" };
	unsigned short int tally[NUM_OPTIONS] = { 0,0,0,0 };

	
	unsigned short int person = 1;

	
	cout << "\n  1. Coffee  2. Tea  3. Coke  4. Orange Juice\n\n";

	for (int input = 1; input != -1; person++) {
		cout << "Please input the favorite beverage of person #" << person
			<< ":\nChoose 1, 2, 3, or 4 from the above menu"
			" or -1 to exit the program\n";
		cin >> input;
		if (input >= 1 and input <= NUM_OPTIONS) {
			tally[input - 1]++;  
		}
		else {
			if (input != -1) 
				cout << "Invalid choice. Try again.\n";
			person--;          
		}
	}

	cout << "\nBeverage         Number of Votes"
		"\n*************************************\n";
	
	for (int line = 0; line < NUM_OPTIONS; line++) {
		cout << setw(17) << left << drink[line]
			<< setw(17) << left << tally[line] << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}
