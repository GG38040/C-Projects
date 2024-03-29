﻿// ConsoleApplication38.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int printMonthCalendar(int numOfDays, int startingDayA);
//Given two parameters, number of days in month(numOfDays), a number 1-7 represents
//the day in the week of the first day in that month ex 1 for Mon, 2 tues, 3 Wed (startingDay)

int isLeapYear(int yearLeap);
//Given the parameter year this function returns true if the year is a leap year and false if it is not. 

void printYearCalendar(int year, int startingDay);
//This function is given two parameters year eg 2016 and starting day 1-7 Mon = 1, Tue = 2...
//that Month Jan 1 starts on.  Then prints full year formatted calendar.  



int main()
{
	using namespace std;

	//section A:
	int sectionA;
	int numOfDays;
	int startingDayA;

	cout << "Section A: This function is given two parameters: numOfDays(days in month)";
	cout << "and startingDay(num 1-7, mon = 1, tue = 2...\n";
	cout << "Please enter the number of days:";
	cin >> numOfDays;
	cout << "Please enter the number of the Month's starting day:";
	cin >> startingDayA;

	sectionA = printMonthCalendar(numOfDays, startingDayA);
	cout << sectionA << endl;

	//Section B:
	int yearLeap;
	int sectionB;

	cout << "Please enter the year to determine if it is a leapyear:";
	cin >> yearLeap;
	sectionB = isLeapYear(yearLeap);
	cout << sectionB << endl;

	//Section C:
	int year;
	int startingDay;

	cout << "To print the calendar year of any given year requested please enter two things:\n";
	cout << "The year:";
	cin >> year;
	cout << "The starting day 1-7 of the first day in Jan:";
	cin >> startingDay;
	cout << endl;

	printYearCalendar(year, startingDay);

	return 0;
}

int printMonthCalendar(int numOfDays, int startingDayA)
{
	using namespace std;
	int days;
	int space = 1;
	int dayOfWeek = startingDayA;

	cout << "Mon	""Tue    "" Wed    "" Thr    "" Fri    "" Sat    "" Sun    \n";
	if (space < startingDayA) {
		for (space = 1; space < startingDayA; space++) {
			cout << "	";
		}
	}
	for (days = 1; days <= numOfDays; days++) {
		cout << days << "	";

		if (days >= numOfDays) {
			cout << endl;
			return dayOfWeek;
		}

		if (dayOfWeek == 7) {
			dayOfWeek = 0;
			cout << endl;
		}
		dayOfWeek++;
	}
	cout << endl;
}

int isLeapYear(int yearLeap)
{
	int evalA;
	int evalB;
	int evalC;

	evalA = yearLeap % 4;
	evalB = yearLeap % 100;
	evalC = yearLeap % 400;

	if (evalA == 0 && evalB > 0) {
		return true;
	}
	else if (evalC == 0) {
		return true;
	}
	else {
		return false;
	}
}

void printYearCalendar(int year, int startingDay)
{
	using namespace std;

	cout << "January " << year << endl;
	int janReturn;
	int numOfDays;
	int janOfDays = 31;
	numOfDays = janOfDays;
	janReturn = printMonthCalendar(numOfDays, startingDay);
	if (janReturn == 7) {
		janReturn = 1;
	}
	else {
		janReturn += 1;
	}
	cout << endl;

	int febReturn;
	cout << "February " << year << endl;
	int yearLeap = year;
	int yearEval;
	yearEval = isLeapYear(yearLeap);

	if (yearEval == 1) {
		int febDays = 29;
		numOfDays = febDays;
		febReturn = printMonthCalendar(numOfDays, janReturn);
		if (febReturn == 7) {
			febReturn = 1;
		}
		else {
			febReturn += 1;
		}
		cout << endl;
	}
	else {
		int febDays = 28;
		numOfDays = febDays;
		febReturn = printMonthCalendar(numOfDays, janReturn);
		if (febReturn == 7) {
			febReturn = 1;
		}
		else {
			febReturn += 1;
		}
		cout << endl;
	}
	cout << endl;

	cout << "March " << year << endl;
	int marReturn;
	int marOfDays = 31;
	numOfDays = marOfDays;
	marReturn = printMonthCalendar(numOfDays, febReturn);
	if (marReturn == 7) {
		marReturn = 1;
	}
	else {
		marReturn += 1;
	}
	cout << endl;

	cout << "April " << year << endl;
	int aprReturn;
	int aprOfDays = 30;
	numOfDays = aprOfDays;
	aprReturn = printMonthCalendar(numOfDays, marReturn);
	if (aprReturn == 7) {
		aprReturn = 1;
	}
	else {
		aprReturn += 1;
	}
	cout << endl;

	cout << "May " << year << endl;
	int mayReturn;
	int mayOfDays = 31;
	numOfDays = mayOfDays;
	mayReturn = printMonthCalendar(numOfDays, aprReturn);
	if (mayReturn == 7) {
		mayReturn = 1;
	}
	else {
		mayReturn += 1;
	}
	cout << endl;

	cout << "June " << year << endl;
	int junReturn;
	int junOfDays = 30;
	numOfDays = junOfDays;
	junReturn = printMonthCalendar(numOfDays, mayReturn);
	if (junReturn == 7) {
		junReturn = 1;
	}
	else {
		junReturn += 1;
	}
	cout << endl;

	cout << "July " << year << endl;
	int julReturn;
	int julOfDays = 31;
	numOfDays = julOfDays;
	julReturn = printMonthCalendar(numOfDays, junReturn);
	if (julReturn == 7) {
		julReturn = 1;
	}
	else {
		julReturn += 1;
	}
	cout << endl;

	cout << "August " << year << endl;
	int augReturn;
	int augOfDays = 31;
	numOfDays = augOfDays;
	augReturn = printMonthCalendar(numOfDays, julReturn);
	if (augReturn == 7) {
		augReturn = 1;
	}
	else {
		augReturn += 1;
	}
	cout << endl;

	cout << "September " << year << endl;
	int sepReturn;
	int sepOfDays = 30;
	numOfDays = sepOfDays;
	sepReturn = printMonthCalendar(numOfDays, augReturn);
	if (sepReturn == 7) {
		sepReturn = 1;
	}
	else {
		sepReturn += 1;
	}
	cout << endl;

	cout << "October " << year << endl;
	int octReturn;
	int octOfDays = 31;
	numOfDays = octOfDays;
	octReturn = printMonthCalendar(numOfDays, sepReturn);
	if (octReturn == 7) {
		octReturn = 1;
	}
	else {
		octReturn += 1;
	}
	cout << endl;

	cout << "November " << year << endl;
	int novReturn;
	int novOfDays = 30;
	numOfDays = novOfDays;
	novReturn = printMonthCalendar(numOfDays, octReturn);
	if (novReturn == 7) {
		novReturn = 1;
	}
	else {
		novReturn += 1;
	}
	cout << endl;

	cout << "December " << year << endl;
	int decReturn;
	int decOfDays = 31;
	numOfDays = decOfDays;
	decReturn = printMonthCalendar(numOfDays, novReturn);
	if (decReturn == 7) {
		decReturn = 1;
	}
	else {
		decReturn += 1;
	}
	cout << endl;

	return;

}






