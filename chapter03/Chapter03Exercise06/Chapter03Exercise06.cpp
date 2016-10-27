//
//  main.cpp
//  Chapter03Exercise06
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that asks you to enter an automobile gasoling consumption figure in the
//  European style (liters per 100 kilometers) and converts to the U.S style of miles per
//  gallon. Note that in addition to using diffrent units of measurement, the U.S approach
//  (distance / fuel) is the inverse of the European approach (fuel / distance). Note that
//  100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19 mpg is about
//  12.41/100 km, and 27 mpg is about 8.71/100 km

#include <iostream>
using namespace std;

const double kmpm = 1.609344, lpg = 3.875;

int main(int argc, const char * argv[]) {
    double lp100km;
    cout << "Enter liters per 100 kilometers: ";
    cin >> lp100km;
    
    cout << (100 * lpg) / (kmpm * lp100km)<< " mpg\n";
    
    return 0;
}
