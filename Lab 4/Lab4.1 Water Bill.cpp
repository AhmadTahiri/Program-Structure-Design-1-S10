// Lab4.1 Water Bill.cpp : finds the average monthly water bill.
// Ahmad Tahiri #100356133

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float Q1, Q2, Q3, Q4;
	float avg, sum;

	cout << "Please input your water bill for Q1" << endl;
		cin >> Q1;
	cout << "Please input your water bill for Q2" << endl;
		cin >> Q2;
	cout << "Please input your water bill for Q3" << endl;
		cin >> Q3;
	cout << "Please input your water bill for Q4" << endl;
		cin >> Q4;

		sum = Q1 + Q2 + Q3 + Q4;
		avg = sum / 4;

	cout << "your average water bill is :$" << avg << endl;

		if (avg <= 25)
			cout << "Good Job on Conserving Water!" << endl;

		if (avg <= 26 || avg <= 74)
			cout << "thats the avrage amount of water used" << endl;

		else if (avg >= 75)
			cout << "you need to use less water!" << endl;


	system("pause");
    return 0;
}

