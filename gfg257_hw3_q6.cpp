// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//variables
	string dayOfWeek;
	int timeOfCall, lengthOfCall;
	double costSum;

	//user input 

	cout << "Hello!  This program computes the cost of your long distance call.\n";
	cout << "Please enter the day of the call for example Mo, Tu, We,...:";
	cin >> dayOfWeek;
	cout << "Please enter the time the call started in hours format for example 0900 or 1300: ";
	cin >> timeOfCall;
	cout << "Please enter the length of the call in minutes:";
	cin >> lengthOfCall;

	//logic compute 

	if (dayOfWeek == "Sa" || dayOfWeek == "Su") {
		costSum = lengthOfCall * 0.15;
	}
	else if (timeOfCall >= 800 && lengthOfCall <= 1800) {
		costSum = lengthOfCall * 0.40;
	}
	else {
		costSum = lengthOfCall * 0.25;
	}

	cout << "The cost of this call is $" << costSum << endl;


    return 0;
}

