//
//  Chapter05Exercise02.cpp
//  Chapter05Exercise02
//
//  Created by Cynthia Brown on 10/26/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that asks the user to type in numbers. After each entry, the program
//	should report the cumulative sum of the entries to date. The program should terminate
//	when the user enters 0.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
	int a = 0;
	int sum = 0;
	do {
		cout << "Enter number: ";
		cin >> a;
		sum += a;
		cout << "The current sum is: " << sum << endl;
	} while (a != 0);
	return 0;
}