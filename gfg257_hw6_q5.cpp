// ConsoleApplication49.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
//NYU CS Bridge
//HW6 Q5 Name flipper
//By GG3 6/26/2018


int main()
{
	string firstName;
	string middleName;
	string lastName;

	

	cout << "Please enter your name:";
	cin >> firstName >> middleName >> lastName;
	
	string middleInit;
	middleInit = middleName[0];

	cout << lastName << ", " << firstName << " " << middleInit << "." << endl;

    return 0;
}

