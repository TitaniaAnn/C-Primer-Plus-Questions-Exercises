//
//  main.cpp
//  Chapter03Exercise02
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a short program that asks for your height in feet and inches and your weight in pounds.
//  (Use three variables to stor information.) Have the program report your body mass index (BMI).
//  To calculate the BMI, first convert your height in feet and inches to your height in inches
//  (1 foot = 12 inches). Then, convert your height in inches to your height in meters by
//  multiplying by 0.0254. Then, convert your weight in pounds into your mass in kilograms by
//  dividing by 2.2 Finally, compute your BMI by dividing your mass in kilograms by the square of
//  your height in meters. Use symbolic constants to represent the various conversion factors.

#include <iostream>
using namespace std;

const double inches_foot = 12, inches_meters = 0.0254, lbs_kilo = 2.2;

int main(int argc, const char * argv[]) {
    double feet, inches, weight;
    cout << "Enter height in feet and inches:\n";
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    
    cout << (weight / lbs_kilo) / (((feet * inches_foot) + inches) * inches_meters) << " BMI\n";
    return 0;
}
