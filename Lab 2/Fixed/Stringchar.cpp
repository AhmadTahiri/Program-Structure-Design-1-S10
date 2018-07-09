// This program demonstrates the use of characters and strings
//
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

// declaration of constants
const string FAVORITESODA = "Dr. Dolittle"; 
const char BESTRATING = 'A';               

int main() {
	char rating;	      // 2nd highest rating
	string favoriteSnack; // Fav snack
	int numberOfPeople;   // # of people in the survey
	int topChoiceTotal;   // # of people who likes the top Snack
	

	favoriteSnack = "crackers";	

	rating = 'B';

	numberOfPeople = 250;

	topChoiceTotal = 148;

	// Fill in the blanks of the following:
	cout << "The preferred soda is " << FAVORITESODA << endl;
	cout << "The preferred snack is " << favoriteSnack << endl;
	cout << "Out of " << numberOfPeople << " people " 
	     << topChoiceTotal << " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING
	     << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating 
	     << endl;
    
	return 0;
}
