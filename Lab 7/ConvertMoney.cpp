// This program will input American money and convert it to foreign currency
//
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <iomanip>
using namespace std;


void  convertMulti(float dollars, float& euros, float& pesos);
void  convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);


const float USD_TO_EUR = 1.06;
const float USD_TO_MXN = 9.73;
const float USD_TO_JPY = 124.35;

int main ()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
	     << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;

	convertMulti(dollars, euros, pesos);

	cout << "Euros: " << euros << " | Pesos: " << pesos << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;

	convertMulti(dollars, euros, pesos, yen);

	cout << "Euros: " << euros << " | Pesos: " << pesos << " | Yen: "
	     << yen << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" <<endl;
	cin >> dollars;


	yen = convertToYen(dollars);

	cout << "Yen: " << yen << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;


	euros = convertToEuros(dollars);
	
	cout << "Euros: " << euros << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;


	pesos = convertToPesos(dollars);

	cout << "Pesos: " << pesos << endl << endl;

	return 0;
}

//******************************************************************************
//                           convertMult
//
//   task:     This function takes a dollar value and converts it to euros
//             and pesos
//   data in:  dollars
//   data out: euros and pesos
//
//******************************************************************************
void convertMulti(float dollars, float& euros, float& pesos)
{
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
}

//******************************************************************************
//                           convertMult
//
//   task:     This function takes a dollar value and converts it to euros
//             pesos and yen
//   data in:  dollars
//   data out: euros pesos yen
//
//******************************************************************************
void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
	yen = convertToYen(dollars);
}

//******************************************************************************
//                           convertToYen
//
//   task:          This function takes a dollar value and converts it to yen
//   data in:       dollars
//   data returned: yen
//
//******************************************************************************
float convertToYen(float dollars)
{
	return USD_TO_JPY * dollars;
}

//******************************************************************************
//                           convertToEuros
//
//   task:          This function takes a dollar value and converts it to euros
//   data in:       dollars
//   data returned: euros
//
//******************************************************************************
float convertToEuros(float dollars)
{
	return USD_TO_EUR * dollars;
}

//******************************************************************************
//                           convertToPesos
//
//   task:          This function takes a dollar value and converts it to pesos
//   data in:       dollars
//   data returned: pesos
//
//******************************************************************************
float convertToPesos(float dollars)
{
	return USD_TO_MXN * dollars;
}
