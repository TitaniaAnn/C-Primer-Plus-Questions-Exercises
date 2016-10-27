//
//  main.cpp
//  Chapter03Exercise01
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a short program that asks for your height in integer inches and then converts your
//  height to feet and inches. Have the program use the underscore character to indicate
//  where to type the response. Also, use a const symbolic constant to represent the conversion
//  factor.

#include <iostream>
using namespace std;

const int inches_feet = 12;

int main(int argc, const char * argv[]) {
    int height;
    cout << "Enter your height in inches:________\b\b\b\b\b\b\b";
    cin >> height;
    cout << height / inches_feet << "ft " << height % inches_feet << "in\n";
    return 0;
}
