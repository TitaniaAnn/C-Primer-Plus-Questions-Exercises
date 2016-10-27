//
//  main.cpp
//  Chapter04Exercise08
//
//  Created by Cynthia Brown on 4/1/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Do Programming Exercise 7, but use new to allocate a structure instead of declaring a
//  structure variable. Also, have the program request the pizza diameter before it requests
//  the pizza company name.

#include <iostream>
using namespace std;

struct PizzaStats
{
    char name[50];
    double diameter;
    double weight;
};

int main(int argc, const char * argv[]) {
    cout << "Pizza Analysis Service \n";
	PizzaStats * pizza = new PizzaStats;
    cout << "Enter the name of the pizza company: ";
	cin >> pizza->name;
	cout << "Enter diameter: ";
	cin >> pizza->diameter;
	cout << "Enter weight: ";
	cin >> pizza->weight;
	
	cout << "Name: " << pizza->name << endl;
	cout << "Diameter: " << pizza->diameter << endl;
	cout << "Weight: " << pizza->weight << endl;
    
    return 0;
}
