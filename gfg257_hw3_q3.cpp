// ConsoleApplication19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	//quadratic equation ax^2 + bx + c = 0 
	//input a,b,c output infinite solution, no solution, one real or two real solution
	//when solution print solution  

	//variables
	double varA;
	double varB;
	double varC;
	double quadEquationSumOne;
	double quadEquationSumTwo;
	double discrimSum;
	string solutionResult;


	//user input
	cout << "Please enter value of a:";
	cin >> varA;
	cout << "Please enter value of b:";
	cin >> varB;
	cout << "Please enter value of c:";
	cin >> varC;

	// Is valid?
	if (varA == 0 && varB == 0 && varC > 0) {
		cout << "No solution.";
		return 0;
	}

	if (varA == 0 && varB == 0 && varC == 0) {
		cout << "Infinite solutions.";
		return 0;
	}


	//Discrimante a,b,c (b*b) - (4*a*c)

	discrimSum = (varB * varB) - (4 * varA * varC);

	if (discrimSum < 0) {
		cout << "This equation has no real solutions.\n";
	}
	else if (discrimSum == 0) {
		quadEquationSumOne = (-1 * varB) / (2 * varA);
		cout << "This equation has a one real solution x=" << quadEquationSumOne << endl;
	}
	else {
		discrimSum = (varB * varB) - (4 * varA * varC);
		discrimSum = sqrt(discrimSum);
		quadEquationSumOne = ((-1 * varB) - discrimSum) / (2 * varA);
		quadEquationSumTwo = ((-1 * varB) + discrimSum) / (2 * varA);
		cout << "This equation has two real solutions x=" << quadEquationSumOne << " x=" << quadEquationSumTwo << endl;
	}



    return 0;
}

