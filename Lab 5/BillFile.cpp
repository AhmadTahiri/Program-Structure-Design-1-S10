// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.
// Ahmad Tahiri #1356133
// I dont know if I did it right??

#include "stdafx.h"
#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
	ifstream dataIn; 
	ofstream dataOut; 
	int quantity;   
	float itemPrice;  
	float totalBill;  

	dataIn.open("transaction.dat");  
	dataOut.open("bill.out");        

	dataOut << setprecision(2) << fixed << showpoint;  

	dataIn >> quantity >> itemPrice;
	totalBill = itemPrice * quantity;

	dataOut << "The total bill is $" << totalBill << endl;

	system("pause");
	return 0;
}
