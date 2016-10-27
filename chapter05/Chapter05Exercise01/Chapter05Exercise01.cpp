//
//  main.cpp
//  Chapter05Exercise01
//
//  Created by Cynthia Brown on 10/26/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that requests the user to enter two integers. The program should then
//	calculate and report the sum of all the integers between and including the two integers.
//	At this point, assume that the smaller integer is entered first. For example, if the user
//	enters 2 and 9, the program should report that the sum of all the integers from 2 through
//	9 is 44.

#include <iostream>
using namespace std;

int computeNumber(int smallNum, int largeNum) {
	int sum = 0;
	for (int a = smallNum; a <= largeNum; a++) {
		sum += a;
	}
	return sum;
}

void display(int sum) {
	cout << sum << endl;
}

int main(int argc, const char * argv[]) {
	int smallNum = 0;
	int largeNum = 0;
	int sum = 0; 
	
	cout << "Please enter small number: ";
	cin >> smallNum;
	cout << "Please enter large number: ";
	cin >> largeNum;
	if (smallNum > largeNum) {
		int tempNum = smallNum;
		smallNum = largeNum;
		largeNum = smallNum;
	}

	sum = computeNumber(smallNum, largeNum);
	display(sum);
	return 0;
}