// ConsoleApplication30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int decimalNum;
	int reverseBinary;
	int forCount;
	int inputDecimal;
	string newBinary;
	string oneBinary;
	string zeroBinary;
	string lastBinary;

	oneBinary = "1";
	zeroBinary = "0";

	cout << "Enter decimal number:";
	cin >> inputDecimal;
	decimalNum = inputDecimal;

	newBinary = "";
	while (decimalNum > 0) {

		if (decimalNum % 2 == 0) {
			newBinary += zeroBinary;
		}
		else {
			newBinary += oneBinary;
		}
		decimalNum /= 2;
	}

	reverseBinary = newBinary.length();

	cout << "The binary representation of " << inputDecimal << " is ";
	for (forCount = reverseBinary - 1; forCount >= 0; forCount--) {
		lastBinary = newBinary.substr(forCount, 1);
		cout << lastBinary;
	}

	return 0;
}

    


