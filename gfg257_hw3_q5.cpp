// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	double weightLbs, heightInches, weightKgs, heightMeters;
	string youAre;
	double bodyMassIndex;

	cout << "Please enter weight (in pounds):";
	cin >> weightLbs;
	cout << "Please enter height (in inches):";
	cin >> heightInches;

	// covert lbs to kilograms
	weightKgs = weightLbs * 0.453592;
	// covert inches to heightMeters
	heightMeters = heightInches * 0.0254;

	// BMI Formula
	bodyMassIndex = weightKgs / (heightMeters * heightMeters);

	// compare BMI
	if (bodyMassIndex < 18.5)
		youAre = " Underweight";
	if ((bodyMassIndex >= 18.5) && (bodyMassIndex <= 25))
		youAre = " Normal";
	if ((bodyMassIndex >= 25) && (bodyMassIndex <= 30))
		youAre = " Overweight";
	if (bodyMassIndex > 30)
		youAre = " Obese";

	//output youAre
	cout << "The weight status:" << youAre << endl;


    return 0;
}

