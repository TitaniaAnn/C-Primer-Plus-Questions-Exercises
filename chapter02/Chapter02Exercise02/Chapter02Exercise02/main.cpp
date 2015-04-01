//
//  main.cpp
//  Chapter02Exercise02
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a C++ program that asks for a distance in furlongs and converts it to yards. (One
//  furlong is 220 yards.)

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int furyar = 220;
    double lngth;
    cout << "Enter length in furlongs: ";
    cin >> lngth;
    cout << "Length is " << lngth * furyar << "ft!" << endl;
    return 0;
}
