// Lab 6.4
// Option 3
//
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
using namespace std;

void calculateGrade( double, double, double& );

// calculate letter grades
const double min_grades[4]  = {  90,  80,  70,  60 };
const char letter_grades[4] = { 'A', 'B', 'C', 'D' };

int main() {
	unsigned short num_grades;
	double average, sum = 0;
	char letter = 0;
	
	cout << "Enter the number of grades\n";
	cin >> num_grades;
	
	double *grade = new double;
	for ( unsigned short n = num_grades ; n > 0 ; n-- ) {
		cout << "Enter a grade between 0-100\n";
		cin >> *grade;
		sum += *grade;
	}
	delete grade;

	calculateGrade( sum, num_grades, average );
	
	// give grade
	for ( int i = 0 ; i < 4 ; i++ ) {
		if ( average >= min_grades[i] ) {
			letter = letter_grades[i];
			break;
		}
	}
	// F.
	if ( letter == 0 ) letter = 'F';

	cout << "The grade is " << letter << '\n';

	return 0;
}

void calculateGrade( double pts, double n, double& avg ) {
	avg = pts / n;
}
