//
//  main.cpp
//  Chapter03Exercise03
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and
//  that then displays the latitude in decimal format. There are 60 seconds of arc to a minute
//  and 60 minutes of arc to a degree; represent these values with symbolic constants. You should
//  use a seperate variable for each input value. A sample run should look like this:
//
//  Enter a latitude in degrees, minutes, and seconds:
//  First, enter the degrees: 37
//  Next, enter the minutes of arc: 51
//  Finally, enter the seconds of arc: 19
//  37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

#include <iostream>
using namespace std;

const int constant = 60;

int main(int argc, const char * argv[]) {
    double degree, minute, second;
    cout << "Enter a latitude in degrees, minutes, and seconds:\nFirst, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = ";
    cout << degree + (minute / constant) + ((second / constant) / constant) << "\n";
    return 0;
}
