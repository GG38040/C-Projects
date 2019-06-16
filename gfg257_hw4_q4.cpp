﻿// ConsoleApplication26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;




int main()
{
	int countNum;
	double seqSumA, seqNumA, geoSumA, lengthNumInputA;
	double seqSumB, seqNumB, geoSumB, expCount;

	cout << "Please enter the length of the sequence:";
	cin >> lengthNumInputA;


	seqSumA = 1;
	for (countNum = 1; countNum <= lengthNumInputA; countNum++) {
		cin >> seqNumA;
		seqSumA *= seqNumA;

	}

	geoSumA = pow(seqSumA, 1 / lengthNumInputA);

	cout << "section a " << geoSumA << endl;

	cout << "\n"; //Section B 

	cout << "Please enter a non-empty sequence of positive integers, each one in a seperate line.  End your sequence by typing -1:\n";
	cin >> seqNumB;

	seqSumB = 1;
	expCount = 0;

	while (seqNumB > 0) {
		seqSumB *= seqNumB;
		cin >> seqNumB;
		expCount += 1;
	}

	geoSumB = pow(seqSumB, 1 / expCount);

	cout << "section b " << geoSumB << endl;


    return 0;
}

