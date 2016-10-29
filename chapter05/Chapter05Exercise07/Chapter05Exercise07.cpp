//
//  Chapter05Exercise07.cpp
//  Chapter05Exercise07
//
//  Created by Cynthia Brown on 10/27/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that uses an array of char and a loop to read one word at a time until
//	the word done is entered. The program should then report the number of words entered
//	(not counting done). A sample run could look like this:
//		Enter words (to stop, type the word done):
//		anteater birthday category dumster
//		envy finagle geometry done for sure
//		You entered a total of 7 words.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
	char text[256];
	int a = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	do {
		cin >> text;
		if (strcmp(text, "done") != 0)
			a++;
	} while (strcmp(text, "done") != 0);

	cout << "You entered a total of " << a << " words." << endl;

	return 0;
}