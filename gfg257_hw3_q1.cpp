// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// variables
	double priceFirstItem, priceSecItem, basePrice, taxRate, taxVar, discountPrice, totTaxPrice, clubDiscount, totClubDiscount, totalPrice, totDiscPrice;

	double clubDisc = 0.10;
	char yesNo;


	// user input 

	cout << "Enter the price of the first item:";
	cin >> priceFirstItem;
	cout << "Enter price of the second item:";
	cin >> priceSecItem;
	cout << "Does customer hava a club card?(Y/N):";
	cin >> yesNo;
	cout << "Enter tax rate, e.g. 5.5 for 5.5% tax:";
	cin >> taxVar;


	//logic compute
	basePrice = priceFirstItem + priceSecItem;

	taxRate = taxVar * 0.01;


	if (priceFirstItem >= priceSecItem) {
		discountPrice = priceSecItem / 2;
		totDiscPrice = priceFirstItem + discountPrice;
	}
	else {
		discountPrice = priceFirstItem / 2;
		totDiscPrice = priceSecItem + discountPrice;
	}

	if ((yesNo == 'Y') || (yesNo == 'y')) {
		clubDiscount = totDiscPrice * clubDisc;
		totClubDiscount = totDiscPrice - clubDiscount;
	}
	else {
		totClubDiscount = totDiscPrice;
	}

	totTaxPrice = totClubDiscount * taxRate;
	totalPrice = totTaxPrice + totClubDiscount;


	//output

	cout << "Base Price: " << basePrice << endl;
	cout << "Price after discount(s):" << totClubDiscount << endl;
	cout << "Total price: " << totalPrice << endl;


    return 0;
}

