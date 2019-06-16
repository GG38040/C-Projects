﻿// ConsoleApplication35.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int fibO(int inputNum);
//computes the fibonacci for given input number
//user enters integer output is its fibonacci

int main()
{
	int outputFibo;
	int inputNum;
	
	cout << "Please enter a positive integer: ";
	cin >> inputNum;

	if (inputNum == 1) {
		cout<<1;
		return 0;
	}
	if (inputNum == 2) {
		cout<<1;
		return 0;
	}
	
	outputFibo = fibO(inputNum);

	cout << outputFibo<<endl; 


    return 0;
}


int fibO(int inputNum)
{
	
	int count;
	int stopNum = 1;
	int fiboSeq = 0;
	int n1 = 0;
	int n2 = 1;
			
	for (count = 2; count <= inputNum; count++) {
		
		fiboSeq = n1 + n2;
		n1 = n2;
		n2 = fiboSeq;

		if (count == inputNum) {
			return fiboSeq;
				
		}
						
	}

}





