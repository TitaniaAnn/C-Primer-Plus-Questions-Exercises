//
//  Chapter05Exercise05.cpp
//  Chapter05Exercise05
//
//  Created by Cynthia Brown on 10/26/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Do Programming Exercise 4, but use a two-dimensional array to store input for 3 years
//	of monthly sales. Report the total sales for each individual year and for the combined
//	years.

#include <iostream>
#include <string>
#include <valarray>
using namespace std;

int main(int argc, const char * argv[]) {
	string months[12] = { "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int sales[3][12];
	for (int b = 0; b < 3; b++) {
		for (int a = 0; a < 12; a++) {
			cout << "Sales for year " << b << " " << months[a] << ": ";
			cin >> sales[b][a];
		}
	}
	int sumAll = 0;
	int sumYear = 0;
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 12; b++) {
			sumYear += sales[a][b];
		}
		cout << "Yearly sales: " << sumYear << endl;
		sumAll += sumYear;
		sumYear = 0;
	}
	cout << "Total Sales: " << sumAll << endl;
	cin >> sales[0][0];
	return 0;
}