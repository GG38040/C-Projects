﻿// ConsoleApplication44.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;




bool isPalindrome(string str);
//This function is given a string str containing a word, and returns true if and only if str
//is a palindrome.  


int main()
{
	using namespace std;
    bool resultWord;
	string inputWord;

	cout << "Please enter a word to see if it is a palindrome(all lowercase):";
	cin >> inputWord;

	if (resultWord = isPalindrome(inputWord)) {
		cout << inputWord << " :Is a palindrome!" << endl;
	}
	else {
		cout << inputWord << " :Not a palindrome!" << endl;
	}

    return 0;
}

bool isPalindrome(string str)
{
	using namespace std; 
	int lenWord;
	string compareWord;
	lenWord = str.length();

	compareWord = str;
	int start = 0;
	
	while (start < lenWord) {
		lenWord--;
		swap(compareWord[start], compareWord[lenWord]);  //swap function
		start++;
	}

	if (compareWord == str) {
		return true;
	}
	else {
		return false;
	}
}

