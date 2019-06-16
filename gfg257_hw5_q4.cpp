﻿// ConsoleApplication39.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



void printDivisors(int num);
//This function is given a positive integer num, and prints all of num's divisors in ascending order
//example num 100 = 1 2 4 5 10 20 25 50 100



int main()
{
	using namespace std;
	int num;
	

	cout << "Please enter a positive integer >= 2: ";
	cin >> num;
	printDivisors(num);

    return 0;
}

void printDivisors(int num)
{
	using namespace std;

	int divisor;
	int evalNum;
	int ascender;

	evalNum = num / 2;
	divisor = 1;
	ascender = 1;

	while (ascender <= evalNum) {

		if(num % divisor == 0) {
		   cout << divisor<<" ";
		   divisor++;
		}
		else {
			divisor++;
		}
		ascender++;
	}


}

