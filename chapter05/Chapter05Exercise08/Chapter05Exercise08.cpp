//
//  Chapter05Exercise08.cpp
//  Chapter05Exercise08
//
//  Created by Cynthia Brown on 10/27/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that matches the description of the program in Programming Exercise
//	7, but use a string class object instead of an array. Include the string header file and
//	use a relational operator to make the comparison test.

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
	string text;
	int a = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	do {
		cin >> text;
		if (text == "done")
			a++;
	} while (text == "done");

	cout << "You entered a total of " << a << " words." << endl;

	return 0;
}