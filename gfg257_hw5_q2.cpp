﻿// ConsoleApplication36.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



void printShiftedTriangle(int triN, int triM, char triSymbol);
//This function prints an n-line triangle, filled with symbol char, shifted by 
//(triM) spaces from the left margin. 

void printPineTree(int pineTN, char pineTSymbol);
//This function prints a sequence of (pineTN) triangles of increasing size
//that form the shape of a pine tree.  User defines size and character used.


int main()
{
	using namespace std;
	int triRows;
	int triSpace;
	char triCharac;

	int pineRows;
	char pineTSymbol;


	
	cout << "Would you like to make a triangle in C++!\n";
	cout << "Please enter number of lines you would like:";
	cin >> triRows;
	cout << "Please enter the number of spaces from left margin:";
	cin >> triSpace;
	cout << "Please enter the character you would like to use to build it:";
	cin >> triCharac;

	printShiftedTriangle(triRows, triSpace, triCharac);

	cout << "Lets make a pine tree using C++!\n";
	cout << "Please enter the number of rows you would like:";
	cin >> pineRows;
	cout << "Please enter the type of symbol you would like your tree to made of:";
	cin >> pineTSymbol;

	printPineTree(pineRows, pineTSymbol);

	return 0;

}

void printShiftedTriangle(int triN, int triM, char triSymbol)
{
	using namespace std;

	int row;
	int spaceB;
	int starT;
	int margin;

	for (row = 1; row <= triN; row++) {
		for (margin = triM; margin > 0; margin--) {
			cout << " ";
		}
			for (spaceB = triN - row; spaceB >= 1; spaceB--) {
			cout << " ";
				}
		
			for (starT = 1; starT <= (row * 2) - 1; starT++) {
			cout<<triSymbol;
				}
			cout << endl;

	}
}

void printPineTree(int pineTN, char pineTSymbol)
{
	using namespace std;

	int row;
	int space;
	int star;
	int sizePine;
	sizePine = pineTN * pineTN;
	int n;
	
	
	
		for (row = 1; row < sizePine; row++) {
			
			for (space = pineTN; space > 0; space--) {
				cout << " ";
			}
			for (star = 1; star <= (row * 2) - 1; star++) {
				cout<<pineTSymbol; 
			}	
			cout << endl;
			pineTN--;
			
	
		}	

}









