//
//  Chapter05Exercise09.cpp
//  Chapter05Exercise09
//
//  Created by Cynthia Brown on 10/27/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program using nested loops that asks the user to enter a value for the number of
//	rows to display. It should then display that many rows of asterisks, with one asterisk in
//	the first row, two in the second row, and so on. For each row, the asterisks are preceded
//	by the number of periods needed to make all the rows display a total number of characters
//	equal to the number of rows. A sample run would look like this:
//		Enter number of rows: 5
//		....*
//		...**
//		..***
//		.****
//		*****

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
	int rows = 0;
	cout << "Enter number of rows: ";
	cin >> rows;

	for (int a = 1; a <= rows; a++) {
		for (int b = 1; b <= rows - a; b++) {
			cout << ".";
		}
		for (int b = rows - a; b < rows; b++) {
			cout << "*";
		}
		cout << endl;
	}
	cin >> rows;
	return 0;
}