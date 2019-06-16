﻿// ConsoleApplication42.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>

const int MAX_IN_ARRAY = 20;




int minInArray(int arr[], int arrSize);
//This function is given arr, an array of integers, and its logical size, arrsize.
//When called it returns the minimum value in arr.  


int main()
{
	using namespace std;
	int sectionA;
	int score[MAX_IN_ARRAY];  //syntax new*

	sectionA = minInArray(score, MAX_IN_ARRAY);
	cout << "The minimum value in this array is: " << sectionA << endl;

    return 0;
}

int minInArray(int arr[], int arrSize)
{
	using namespace std;
	int minValue;
	cout << "Please enter size of array(Max size is 20):";
	cin >> arrSize;

	for (int i = 0; i < arrSize; i++) { //array formation 
		cin >> arr[i];	
	}
	minValue = arr[0];
	for (int i = 0; i < arrSize; i++) { //array evaluation for min value 
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}	
	return minValue;
}

