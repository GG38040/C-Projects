// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	int totalCents;
	int dollars;
	int centsRemaining;

	cout << "Please enter number of coins:\n";
	cout << "# of quarters:";
	cin >> quarters;
	cout << "# of dimes:";
	cin >> dimes;
	cout << "# of nickels:";
	cin >> nickels;
	cout << "# of pennies:";
	cin >> pennies;

	totalCents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;

	dollars = totalCents / 100;
	centsRemaining = totalCents % 100;

	cout << "The total is ";
	cout << dollars;
	cout << " dollar(s) and ";
	cout << centsRemaining;
	cout << " cents.";

    return 0;
}

