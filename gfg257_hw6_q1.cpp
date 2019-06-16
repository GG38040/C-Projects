﻿// ConsoleApplication43.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

const int MAX_IN_ARRAY = 20;



int minInArray(int arr[], int arrSize);
//This function is given arr, an array of integers, and its logical size, arrsize.
//When called it returns the minimum value in arr.  

void indexLocation(int arr[], int result);
//searches arrary from the result of the function minInArray() prints index location of the minimum values.  



int main()
{
	using namespace std;
	
	int sectionA;
	int score[MAX_IN_ARRAY];  

	sectionA = minInArray(score, MAX_IN_ARRAY);
	
	cout << "The minimum value is " << sectionA << ", and it is located in the following indices: ";
	indexLocation(score, sectionA);


    return 0;
}

int minInArray(int arr[], int arrSize)
{
	using namespace std;
	int minValue;

	cout << "Please enter 20 integers seperated by a space:";
	
	
	for (int i = 0; i < MAX_IN_ARRAY; i++) {
		cin >> arr[i];
	}
	minValue = arr[0];
	for (int i = 0; i < MAX_IN_ARRAY; i++) {	
		if (arr[i] <= minValue) {
			minValue = arr[i];
		}	
	}
	return minValue;
}

void indexLocation(int arr[], int result)
{
	using namespace std;

	for (int i = 0; i < MAX_IN_ARRAY; i++) {
		if (arr[i] == result) {
			cout << i;
			cout << " ";
		}		
	}
	cout << endl;
	return;
}


