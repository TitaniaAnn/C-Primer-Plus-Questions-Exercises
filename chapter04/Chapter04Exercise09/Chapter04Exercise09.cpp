//
//  main.cpp
//  Chapter04Exercise09
//
//  Created by Cynthia Brown on 4/2/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Do Programming Exercise 6, but, instead of declaring an array of three CandyBar
//  structures, use new to allocate the array dynamiclly

#include <iostream>
using namespace std;

struct CandyBar
{
    char brand[20];
    double weight;
    int calories;
};

int main(int argc, const char * argv[]) {
	CandyBar * snack = new CandyBar[3];
    cout << "Candy Bars!";
    for (int a = 0; a < sizeof(snack); a++) {
        cout << "Enter Candy Brand: ";
        string tmp;
        cin >> tmp;
        strncpy(snack[a].brand, tmp.c_str(), sizeof(snack[a].brand));
        snack[a].brand[sizeof(snack[a].brand) - 1] = 0;
        cout << "Enter Candy Weight: ";
        cin >> snack[a].weight;
        cout << "Enter Cnady Calories: ";
        cin >> snack[a].calories;
    }
    cout << "List of Candy Bars: \n";
    for (int a = 0; a < sizeof(snack); a++) {
        printf("%s - weight: %f, cal: %i \n", snack[a].brand, snack[a].weight, snack[a].calories);
    }
    return 0;
}

