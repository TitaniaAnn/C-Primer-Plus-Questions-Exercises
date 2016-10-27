//
//  main.cpp
//  Chapter03Exercise05
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that asks how many miles you have driven and how many gallons of
//  gasoline you have used and then reports the miles per gallon your car has gotten.
//  Or, if you prefer, the program can request distance in kilometers and petrol in liters
//  and then report the result European style, in liters per 100 kilometers.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double miles, gallons, kilometers, liters;
    int type = 0;
    do
    {
        cout << "If MPG enter 0 if liters per 100 kilometers enter 1: ";
        cin >> type;
    } while (type > 1 || type < 0);
    
    switch (type) {
        case 0:
            cout << "Enter how many mile: ";
            cin >> miles;
            cout << "Enter how many gallons: ";
            cin >> gallons;
            cout << miles / gallons << "mpg\n";
            break;
            
        case 1:
            cout << "Enter how many kilometers: ";
            cin >> kilometers;
            cout << "Enter how many liters: ";
            cin >> liters;
            cout << liters / (kilometers / 100) << "/100 km\n";
            break;
    }
    return 0;
}
