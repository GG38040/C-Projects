﻿// ConsoleApplication34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>




int main()
{
	using namespace std;

	//int x1, x2, x3, x4;

	int guessAttempt;
	int guessInput;
	int randomNumber;
	int rangeLower;
	int rangeUpper;
	

	string wrongBigger;
	string wrongSmaller;
	string congrats;

	int count;


	srand(time(0));

	//x1 = rand();
	//x2 = rand();
	//x3 = rand() % 100;  //sets random number between 0-99

	wrongBigger = "Wrong! My number is bigger.";
	wrongSmaller = "Wrong! My number is smaller.";
	congrats = "Congrats! You guessed my number in ";

	randomNumber = (rand() % 100) + 1; //sets random number between 1-100
	guessAttempt = 5;
	rangeLower = 1;
	rangeUpper = 100;

	//cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;

	for (count = 5; count > 0; count--) {
		
		cout << "I thought of a number between 1 and 100!  Try to guess it. \n";
		cout << "Range:["<<rangeLower<<","<<rangeUpper<<"], Number of guesses left: " << guessAttempt << " \n";
		cout << "your guess: ";
		cin >> guessInput;

		guessAttempt -= 1;


		if (guessInput == randomNumber) {
			cout << "Congrats! You guessed my number in "<< guessAttempt << " guesses.";  // ?
			return 0;
		}
		if (guessInput > randomNumber) {
			cout << "Wrong! My number is smaller.";
			rangeUpper = guessInput - 1;
			cout << endl;
		}
		if (guessInput < randomNumber) {
			cout << "Wrong! My number is bigger.";
			rangeLower = guessInput + 1;
			cout << endl;
		}
		if (guessAttempt == 0) {
			cout << "Out of guesses! My number is " << randomNumber << endl;
			return 0;
		}
		cout << endl;

	}

    return 0;
}

