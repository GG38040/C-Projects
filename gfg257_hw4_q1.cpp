// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

		int numAEval, numAPrint;
		int numBEval, numBPrint;
		int numInput;


		cout << "Please enter a positive integer:";
		cin >> numInput;

		numAEval = 1;
		numAPrint = 0;

		while (numAPrint < numInput)
			if (numAEval % 2 == 0) {
				cout << " section a " << numAEval << endl;
				numAEval += 1;
				numAPrint += 1;
			}
			else {
				numAEval += 1;
			}

			cout << "\n";

			numBPrint = 0;

			for (numBEval = 1; numBPrint < numInput; numBEval++)
				if (numBEval % 2 == 0) {
					cout << " section b " << numBEval << endl;
					numBPrint += 1;
				}

    return 0;
}

