// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int dayOne;
	int dayTwo;
	int days;
	int carryDays;
	int totalDays;

	int hourOne;
	int hourTwo;
	int hours;
	int carryHours;
	int totalHours;

	int minOne;
	int minTwo;
	int minutes;
	int totalMin;

	cout << "Please enter the number of days worked:";
	cin >> dayOne;
	cout << "Please enter the number of hours worked:";
	cin >> hourOne;
	cout << "Please enter the number of minutes worked:";
	cin >> minOne;
	cout << "\n";

	cout << "Please enter the number of days worked:";
	cin >> dayTwo;
	cout << "Please enter the number of hours worked:";
	cin >> hourTwo;
	cout << "Please enter the number of minutes worked:";
	cin >> minTwo;
	cout << "\n";

	minutes = minOne + minTwo;
	carryHours = minutes / 60;
	totalMin = minutes % 60;


	hours = hourOne + hourTwo;
	carryDays = hours / 24;
	totalHours = hours % 24 + carryHours;

	days = dayOne + dayTwo;
	totalDays = days + carryDays;

	cout << "The total time both of them worked together is: " << totalDays << " days, " << totalHours << " hours, and " << totalMin << " minutes.";


    return 0;
}

