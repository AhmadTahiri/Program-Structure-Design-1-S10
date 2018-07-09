// Name.cpp : This program will write the name, address and phone # 
//
// Ahmad Tahiri id:100356133

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string address;
	string CSZ;

	cout << "What is your name?" << endl; // getting name
	getline(cin, name);
	cout << "Hey! " << name << endl; // display name 
	// End of Name
	cout << "Where do you live?" << endl; // creepy question 
	getline(cin, address); // storing address 
	cout << "You live in: " << address << endl; // display address 
	// End of Address 
	cout << "What is your City, State and Zipcode?" << endl; // Creepy question #2
	getline(cin, CSZ); // Storing CSZ
	cout << "Your City, State and Zipcode is:" << CSZ << endl; // Display CSZ


	system("pause");
    return 0;
}

