// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	int posNumOne;
	int posNumTwo;
	int sum;

	cout << "Please enter two positive integers, seperated by a space:";
	cin >> posNumOne >> posNumTwo;

	sum = posNumOne + posNumTwo;
	cout << posNumOne << "+" << posNumTwo << " = " << sum << endl;

	sum = posNumOne - posNumTwo;
	cout << posNumOne << "-" << posNumTwo << " = " << sum << endl;

	sum = posNumOne * posNumTwo;
	cout << posNumOne << "*" << posNumTwo << " = " << sum << endl;

	double dsum;
	double remsum;
	double newTotal;


	sum = posNumOne / posNumTwo;
	dsum = posNumOne % posNumTwo;
	remsum = dsum / posNumTwo;
	newTotal = remsum + sum;
	cout << posNumOne << "/" << posNumTwo << " = " << newTotal << endl;



	sum = posNumOne / posNumTwo;
	cout << posNumOne << " div " << posNumTwo << " = " << sum << endl;

	sum = posNumOne % posNumTwo;
	cout << posNumOne << " mod " << posNumTwo << " = " << sum << endl;
    
	
	return 0;

}

