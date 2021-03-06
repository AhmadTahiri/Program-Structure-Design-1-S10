// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int quantity; // contains the amount of items purchased
	float itemPrice; // contains the price of each item
	float totalBill; // contains the total bill.
	cout << setprecision(2) << fixed << showpoint; // formatted output
	cout << "Please input the number of items bought" << endl;
	cin >> quantity; // Fill in the input statement to bring in the quantity.
	cout << "Please input the price" << endl;// Fill in the prompt to ask for the price.
	cin >> itemPrice; // Fill in the input statement to bring in the price of each item.
	totalBill = itemPrice * quantity; // Fill in the assignment statement to determine the total bill.
	cout << "Your Total price is: $" << totalBill << endl;  // Fill in the output statement to print total bill,
	// with a label to the screen.
 
	system("pause");
	return 0;
}