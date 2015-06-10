//
//  main.cpp
//  Chapter04Exercise05
//
//  Created by Cynthia Brown on 4/1/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  The CandyBar structure contains three members. The first member holds the brand of the candy bar.
//  The second member holds the weight (which may have a fractional part) of the candy bar, and the
//  third member holds the number of calories (an integer value) in the candy bar. Write a program
//  that declares such a structure and creates a CandyBar variable called snack, initializing its
//  members to "Mocha Munch", 2.3, and 350, respectively. The initialization should be part of the
//  delegation for snack. Finally, the program should display the contents of the snack variable.

#include <iostream>
using namespace std;

struct CandyBar
{
    char brand[20];
    double weight;
    int calories;
};

int main(int argc, const char * argv[]) {
    CandyBar snack;
    string tmp = "Mocha Munch";
    strncpy(snack.brand, tmp.c_str(), sizeof(snack.brand));
    snack.brand[sizeof(snack.brand) - 1] = 0;
    snack.weight = 2.3;
    snack.calories = 350;
    printf("Brand: %s \n Weight: %f \n Calories: %i", snack.brand, snack.weight, snack.calories);
    return 0;
}
