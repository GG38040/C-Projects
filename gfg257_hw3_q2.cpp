// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	// variables
	string nameFirst;
	string youAre;
	int gradYear;
	int currentYear;
	int numYear;

	// user input
	cout << "Please enter your name:";
	cin >> nameFirst;
	cout << "Please enter your graduation year:";
	cin >> gradYear;
	cout << "Please enter your current year:";
	cin >> currentYear;

	numYear = gradYear - currentYear;

	if (numYear > 4)
		youAre = " not in college yet.";

	if (numYear == 4)
		youAre = " a Freshman.";

	if (numYear == 3)
		youAre = " a Sophomore.";

	if (numYear == 2)
		youAre = " a Junior.";

	if (numYear == 1)
		youAre = " a Senior.";

	if (numYear < 1)
		youAre = " Graduated.";

	//output
	cout << nameFirst << ", you are" << youAre << endl;


    return 0;
}

