// This program illustrates the use of logical operators
// Ahmad Tahiri #100356133
// Exercise #2: No you can't put year < 4 and year <= 3 
// Exercise #3 Anyone with gpa and year > 1
// Exercise #4 No you cant use ( year != '4'|| gpa < 2.0) 



#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
		<< endl << endl;
	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
	if (gpa != 2.0 && year == '4')
	//if (gpa >= 2.0 || year == '4') // gpa is greater then 2.0 or year = 4 then graduate 
		cout << "It is time to graduate soon" << endl;

	else if (year != '4' || gpa < 2.0)
	//else if (year != '4' && gpa < 2.0) // year is not = 4 and gpa is less then 2.0 then you need more schooling	
		cout << "You need more schooling" << endl;

	system("pause");
    return 0;
}

