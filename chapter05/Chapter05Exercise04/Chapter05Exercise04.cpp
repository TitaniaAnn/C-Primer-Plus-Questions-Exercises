//
//  Chapter05Exercise04.cpp
//  Chapter05Exercise04
//
//  Created by Cynthia Brown on 10/26/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  You sell the book C++ for fools. Write a program that has you enter a year's worth of
//	monthly sales (in terms of number of books, not the money). The program should use a
//	loop to prompt you by month, using an array of char * (or an array of string objects, if
//	you prefer) initialized to the month strings and storing the input data in an array of int.
//	Then, the program should find the sum of the array ontents and report the total sales
//	for the year.
 
#include <iostream>
#include <string>
#include <valarray>
using namespace std;

int main(int argc, const char * argv[]) {
	string months[12] = { "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int sales[12];
	for (int a = 0; a < 12; a++) {
		cout << "Sales for " << months[a] << ": ";
		cin >> sales[a];
	}
	valarray<int> yearlySales(sales, 12);
	cout << "Yearly sales: " << yearlySales.sum() << endl;
	cin >> sales[0];
	return 0;
}