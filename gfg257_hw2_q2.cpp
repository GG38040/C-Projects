// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int dollars;
	int cents;
	int totalCents;

	int dollarsToCents;
	int quarters;

	int dimeCents;
	int dimes;

	int nickelCents;
	int nickels;

	int pennies;


	cout << "Please enter your amount in the format of dollar(s) and cent(s) seperated by a space:";
	cin >> dollars >> cents;


	totalCents = (dollars * 100) + cents;

	quarters = totalCents / 25;

	dimeCents = totalCents % 25;
	dimes = dimeCents / 10;

	nickelCents = dimeCents % 10;
	nickels = nickelCents / 5;

	pennies = nickelCents % 5;

	cout << dollars;
	cout << " dollar(s) and ";
	cout << cents;
	cout << " cents are:\n";

	cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, " << pennies << " pennies.";
	

    return 0;
}

