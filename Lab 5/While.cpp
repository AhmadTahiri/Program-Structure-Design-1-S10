// Ahmad Tahiri #100356133
//
// Exercise #1 : There is no easy way to close the program and it dosent ask if you want to try again it dose it automaticly. 
// Exercise #3 : The do while loop executes the content of the loop once before checking the condition


#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	char letter = 'a';
	char exit = '1';
	int stay = '2';





	while (letter != 'x')
	{
		cout << "Please enter a letter" << endl;
			cin >> letter;
		cout << "The letter you entered is " << letter << endl;
		cout << "if you want to stop press [1] or [2] if you want to continue." << endl;
			cin >> exit;
			// Asks if they want to continue
		if (exit == '1') // if they press 1 the program will return 0
			return 0;

		else (stay == '2'); // if they press 2 it will loop and ask for a new letter
	}
	

	return 0;
}