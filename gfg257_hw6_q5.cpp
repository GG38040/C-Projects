﻿// ConsoleApplication49.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;



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

