//
//  main.cpp
//  Chapter02Exercise05
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that has main() call a user-defined function that takes a distance in
//  light years as an argument and then returns the distance in atronomical units. the program should
//  request request the light year value as input from the user and display the result, as shown
//  in the following code:
//
//  Enter the number of light years: 4.2
//  4.2 light years = 265608 astronomical units.
//
//  An astronomical unit is the average distance from the earth to the sun (about 150,000,000 km or 93,000,000 miles),
//  and a light year is the distance light travels in a year (about 1 trillion kilometers of 6 trillion miles).
//  (The nearest star afer the sun is about 4.2 light years away.) Use type double (as in Listing 4.2) and this
//  conversion factor:
//
//  1 light year = 63,240 astronomical units

#include <iostream>
using namespace std;
const double astrlight = 63240;

double convert(double l)
{
    return l * astrlight;
}

int main(int argc, const char * argv[]) {
    double light;
    cout << "Enter the number of light years: ";
    cin >> light;
    cout << light << " light year(s) = " << convert(light) << " astronomical units. \n";
    return 0;
}
