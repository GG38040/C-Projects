// ConsoleApplication29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std; 

//NYC CS Bridge for loops
//hwk4 q5 
//GG3 5/19/18 :) Finally finished this one!!


int main()
{
	int numInput;
	int numLines;
	int row;
	int spaceT;
	int starT;
	int spaceB;
	int starB;
	int halfWay;



	cout << "Please enter the number of lines requested:";
	cin >> numInput;
	numLines = numInput * 2;
	halfWay = numLines / 2;

	for (row = numLines; row >= 1; row--) {
		if (row > halfWay) {
			for (spaceT = numLines; spaceT > row; spaceT--) {
				cout << " ";
			}
			for (starT = numLines; starT < row * 2 - 1; starT++) {
				cout << "*";
			}
			cout << endl;
		}
		if (row <= halfWay) {
			for (spaceB = row - 1; spaceB > 0; spaceB--) {
				cout << " ";
			}
			for (starT = numLines; starT >= row * 2; starT--) {
				cout << "*";
			}
			cout << endl;
		}
	}


    return 0;
}

