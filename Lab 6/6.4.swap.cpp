// Lab 6.4
// Option 1
//
//Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>

using namespace std;


// template function for swapping two variables of the same type
template <typename T> void swap_values( T&, T& );

int main() {
	double first, second;
	
	cout << "Enter the first number\nThen hit enter\n";
	cin >> first;
	cout << "Enter the second number\nThen hit enter\n";
	cin >> second;
	
	double init_f = first, init_s = second;
	
	swap_values( first, second );
	
	cout << "You input the numbers as " << init_f << " and " << init_s << ".\n"
	     << "After swapping, the first number has the value of " << first
	     << "\n which was the value of the second number\n"
	        "The second number has the value of " << second 
	     << "\n which was the value of the first number\n";

	return 0;
}

template <typename T>
void swap_values( T& f, T& s ) {
	T tmp = f;
	    f = s;
	    s = tmp;
}

