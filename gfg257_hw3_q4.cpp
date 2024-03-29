// ConsoleApplication21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
	//variable 
	int chooseMethod;
	int numRound;
	double realNumEval;
	const int FLOOR_ROUND = 1;
	const int CEILING_ROUND = 2;
	const int ROUND = 3;

	//user input
	cout << "Please enter a Real number:\n";
	cin >> realNumEval;

	cout << "Please choose your rounding method:\n";
	cout << "1. Floor round\n";
	cout << "2. Ceiling round\n";
	cout << "3. Round to nearest whole number\n";
	cin >> chooseMethod;

	//logic switch statement user choice 
	switch (chooseMethod)
	{
	case 1:
		numRound = realNumEval / 1;
		cout << numRound;
		break;
	case 2:
		numRound = realNumEval / 1;
		if (realNumEval > numRound) {
			numRound = (realNumEval / 1) + 1;
		}
		else {
			numRound = realNumEval;
		}
		cout << numRound;
		break;
	case 3:
		numRound = realNumEval / 1;
		if (realNumEval >= (numRound + 0.5)) {
			numRound = (realNumEval / 1) + 1;
		}
		else {
			numRound = realNumEval / 1;
		}
		cout << numRound;
		break;
	}

    return 0;
}

