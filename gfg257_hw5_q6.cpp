﻿// ConsoleApplication41.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>



double eApprox(int n);
//This function is given a positive integer n, and returns an approximation of e.



int main()
{
	using namespace std;

	int inputNum; 

	cout.precision(30);

	cout << "Please enter num to recieve e Approx:";
	cin >> inputNum;

	for (int n = 1; n <= inputNum; n++) {
		cout << "n = " <<n<< '\t' << eApprox(n) << endl;
	}
    return 0;
}

double eApprox(int n)
{
	using namespace std;

	double x = 1;
	double mult;
	double divider;
	double add;
	double add1;
	double add2 = 0;

	for (int counter = 1; counter <= n; counter++) {
		
		mult = x * counter;
		divider = 1 / mult;
		add1 = divider;
		add = add1 + add2;
		x = mult;
		if (counter == 1) {
			add = 2;
		}
		add2 = add;
	}
	return add;

}

