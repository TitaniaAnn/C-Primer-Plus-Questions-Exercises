//
//  Chapter05Exercise06.cpp
//  Chapter05Exercise06
//
//  Created by Cynthia Brown on 10/26/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Design a structure called car that holds the following information about an automobile:
//	its make, as a string in a character array or in a string object, and the year it was built,
//	as an integer. Write a program that asks the user how many cars to catalog. The program
//	should then use new to create a dynamic array of that many car structures. Next, it
//	should prompt the user to input the make (Which might consist of more then one word)
//	and year information for each structure. Note that this requires some care because it 
//	alternates reading strings with numeric data (see Chapter 4). Finally, it should display
//	the contents of each structure. A sample run should look something like the following:
//		How many cars do you wish to catalog? 2
//		Car #1:
//		Please enter the make: Hudson Hornet
//		Please enter the year made: 1952
//		Car #2:
//		Please enter the make: Kaiser
//		Please enter the year made: 1951
//		Here is your collection:
//		1952 Hudson Hornet
//		1951 Kaiser

#include <iostream>
#include <string>
using namespace std;

struct Car {
	string make;
	int year;
};
int main(int argc, const char * argv[]) {
	int num = 0;
	cout << "How many cars do you wish to catalog? ";
	cin >> num;
	Car * cars = new Car[num];

	for (int a = 0; a < num; a++) {
		cout << "Car #" << num << endl;
		cout << "Please enter the make: ";
		getline(cin, cars[a].make);
		cout << "Please enter the year made: ";
		cin >> cars[a].year;
	}

	cout << "Here is your collection:" << endl;
	for (int a = 0; a < num; a++) {
		cout << cars[a].year << " " << cars[a].make << endl;
	}

	return 0;
}