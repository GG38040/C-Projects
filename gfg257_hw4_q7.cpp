﻿// ConsoleApplication33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{
	int row;
	int column;
	int multNum;
	int counter;
	int input;
	
	cout << "Please enter a positive integer:";
	cin >> input;

	for (row = 1; row <= input; row++) {
		multNum = 1;
		cout << endl;
		for (column = 1; column <= input; column++) {
			multNum = row * column;
			cout << multNum << "	";
			
		}
	}
	cout << endl;

    return 0;
}

