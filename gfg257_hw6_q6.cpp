﻿// ConsoleApplication50.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;





int main()
{
	string text;
	int textLength;
	char integerChar;
	char replaceX = 'X';
	
	

	cout << "Please enter text:";
	getline(cin, text);
	textLength = text.length();
	
	cout << endl;
	
	for (int i = 0; i < textLength; i++) {
		integerChar = text[i];
		if (int(integerChar) >= 48 && int(integerChar) <= 57) {
			text[i] = replaceX;
		}
		
	}
	//Need to discriminate numbers within words out.  otherwise solid.  
	cout << text;
	cout << endl;

    return 0;
}

