﻿// ConsoleApplication40.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>



//Function Declarations:
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
//takes an input of pos int num >=2 and updates two output param with 
//the number of proper divisors and sum.

bool isPerfect(int num);
//This function is given positive integer >= 2 and determines if it is a perfect number
//This function is dependent on analyzeDividors() to work properly.  

int main()
{
	using namespace std;
	int numberA;
	int n1;
	int n2;

	cout << "(SectionA) Please enter a positive num >=2:";
	cin >> numberA;

	analyzeDividors(numberA, n1, n2);
	cout << n1 << endl;
	cout << n2 << endl;

	int numberB;
	cout << "(SectionB) Please enter a positive number greater than 2 to determine if it is a perfect number:";
	cin >> numberB;
	isPerfect(numberB);

	if (isPerfect(numberB)) {
		cout << "ITS PERFECT!!" << endl;
	}
	else {
		cout << "NOPE NOT PERFECT!!" << endl;
	}


    return 0;
}


//Function heading/ definition  
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs)
{
	using namespace std;

	int divisor;
	int evalNum;
	int ascender;
	int sumer1;
	int sumer2;

	int countDivs = 1;
	evalNum = num / 2;
	divisor = 1;
	ascender = 1;
	sumer1 = 0;
	sumer2 = 0;
	
	while (ascender <= evalNum) {

		if (num % divisor == 0) {

			sumer2 = divisor;
			outSumDivs = sumer1 + sumer2;
			sumer1 = outSumDivs;
			outCountDivs = countDivs++;
			divisor++;
		}
		else {
			divisor++;
		}
		ascender++;
	}
	return; 
}

bool isPerfect(int num)
{
	using namespace std;
	int number;
	int n1;
	int n2;

	number = num; 

	analyzeDividors(number, n1, n2);
	if (number == n2) {
		return true;
	}
	else {
		return false;
	}

}

