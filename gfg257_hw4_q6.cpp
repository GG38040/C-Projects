﻿// ConsoleApplication31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;



int main()
{
	
	int inputNum
	int countNumOdd;
	int countNumEven;
	int evalNumDecimal;
	int evalNum;
	int count;
	int evenOut;


	cout << "Please enter a positive number greater than one:(this program returns even numbers)";
	cin >> inputNum;

	evalNum = 1;

	for (count = 1; count < inputNum; count++) {
		evalNum += 1;
		evenOut = evalNum;
		evalNumDecimal = evalNum;
		countNumEven = 0;
		countNumOdd = 0;
		for (evalNumDecimal = evalNum; evalNumDecimal > 0; evalNumDecimal % 10) {
			if (evalNumDecimal % 2 == 0) {
				countNumEven++;
				evalNumDecimal = evalNumDecimal / 10;
			}
			else {
				countNumOdd++;
				evalNumDecimal = evalNumDecimal / 10;

			}
		}    if (countNumEven > countNumOdd) {
			cout << evenOut;
			cout << endl;
		}
		

	}
	
	


	

    return 0;
}

