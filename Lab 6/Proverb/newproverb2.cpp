<<<<<<< HEAD
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb( int );

int main ()
{	
	int wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Input a 1 if you want the sentence to be finished with party" << endl;
	cout << "Input a 2 for the word country" << endl;
	cout << "Please input your choice now" << endl;
	cin  >> wordCode;
	cout << endl;
	writeProverb(wordCode);

	return 0;
}

void writeProverb (int number)
{
	// Fill in the body of the function to accomplish what is described above
	if ( number == 1 ) {
		cout << "Now is the time for all good men"
		        " to come to the aid of their party.\n";
	} else if (number == 2 ) {
		cout << "Now is the time for all good men"
		        " to come to the aid of their country\n";
	} else {
		cerr << "I'm sorry but that is an incorrect choice;"
		        " Please input a 1 or 2.\n";
		cin >> number;
		writeProverb( number );
	}
}


=======
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb( int );

int main ()
{	
	int wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Input a 1 if you want the sentence to be finished with party" << endl;
	cout << "Input a 2 for the word country" << endl;
	cout << "Please input your choice now" << endl;
	cin  >> wordCode;
	cout << endl;
	writeProverb(wordCode);

	return 0;
}

void writeProverb (int number)
{
	// Fill in the body of the function to accomplish what is described above
	if ( number == 1 ) {
		cout << "Now is the time for all good men"
		        " to come to the aid of their party.\n";
	} else if (number == 2 ) {
		cout << "Now is the time for all good men"
		        " to come to the aid of their country\n";
	} else {
		cerr << "I'm sorry but that is an incorrect choice;"
		        " Please input a 1 or 2.\n";
		cin >> number;
		writeProverb( number );
	}
}


>>>>>>> 97bc8ff8a2730e66d2c96a63f4aa3c718281e337
