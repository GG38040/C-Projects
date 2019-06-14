// ConsoleApplication25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Compute decimal number into simplified version of roman nummeral format
//by GG3
//NYU CS Bridge course week 4
//created 5/6/18


int main()
{
	int inputNum;
	int countM, countC;
	int sumIntMLeft, sumIntDLeft, sumIntCLeft, sumIntLLeft, sumIntXLeft, sumIntVLeft;
	int sumMNum, sumDNum, sumCNum, sumLNum, sumXNum, sumVNum, sumINum;
	string romanString;
	string mRoman, dRoman, cRoman, lRoman, xRoman, vRoman, iRoman;
	mRoman = "M";
	dRoman = "D";
	cRoman = "C";
	lRoman = "L";
	xRoman = "X";
	vRoman = "V";
	iRoman = "I";

	cout << "Please enter a decimal number:";
	cin >> inputNum;



	countM = 0;
	sumMNum = inputNum / 1000;

	while (countM < sumMNum) {
		romanString += mRoman;
		countM += 1;
	}

	sumIntMLeft = inputNum % 1000;
	sumDNum = sumIntMLeft / 500;

	if (sumDNum > 0) {
		romanString += dRoman;
	}

	sumIntDLeft = sumIntMLeft % 500;
	sumCNum = sumIntDLeft / 100;

	if (sumCNum > 0) {
		for (countC = 0; countC < 4; countC++)
			if (sumCNum == countC) {
				break;
			}
			else {
				romanString += cRoman;
			}
	}

	sumIntCLeft = sumIntDLeft % 100;
	sumLNum = sumIntCLeft / 50;

	if (sumLNum > 0) {
		romanString += lRoman;
	}

	sumIntLLeft = sumIntCLeft % 50;
	sumXNum = sumIntLLeft / 10;

	if (sumXNum > 0) {
		for (countC = 0; countC < 4; countC++)
			if (sumXNum == countC) {
				break;
			}
			else {
				romanString += xRoman;
			}
	}

	sumIntXLeft = sumIntLLeft % 10;
	sumVNum = sumIntXLeft / 5;

	if (sumVNum > 0) {
		romanString += vRoman;
	}

	sumIntVLeft = sumIntXLeft % 5;
	sumINum = sumIntVLeft / 1;

	if (sumINum > 0) {
		for (countC = 0; countC < 4; countC++)
			if (sumINum == countC) {
				break;
			}
			else {
				romanString += iRoman;
			}
	}


	cout << romanString << endl;

    return 0;
}

