//
//  main.cpp
//  Chapter02Exercise04
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that has main() call a user-defined function that takes a Celsius temper-
//  ature value as an argument and then returns the equivalent Fahrenheit value. The pro-
//  gram should request the Celsius value as input from the user and display the result, as
//  shown in the following code:
//
//  Please enter a Celsius value: 20
//  20 degrees Celsius is 68 degrees Fahrenheit
//
//  For reference, here is the formula for making the conversion:
//
//  Fahrenheit = 1.8 X degrees Celsius + 32.0

#include <iostream>
using namespace std;

double convertCtoF(double temp)
{
    return 1.8 * temp + 32;
}

int main(int argc, const char * argv[]) {
    double temp;
    cout << "Please enter a Celsius value: ";
    cin >> temp;
    cout << temp << " degrees Celsius is " << convertCtoF(temp) << " degrees Fahrenheit" << endl;
    return 0;
}
