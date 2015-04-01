//
//  main.cpp
//  Chapter03Exercise04
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that asks the user to enter the number of seconds as an integer value
//  (use type long) and that then displays the equivalent time in days, hours, minutes,
//  and seconds. Use symbolic constants to represent the number of hours in the day, the
//  number of minutes in an hour, and the number of seconds in a minute. The output should
//  look like this:
//
//  Enter the number of seconds: 31600000
//  31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

#include <iostream>
using namespace std;

const int seconds = 60, minutes = 60, hours = 24;

int main(int argc, const char * argv[]) {
    long value, cvalue, second, minute, hour, day;
    cout << "Enter the number of seconds: ";
    cin >> value;
    second = value % seconds;
    cvalue = value / seconds;
    minute = cvalue % minutes;
    cvalue = cvalue / minutes;
    hour = cvalue % hours;
    cvalue = cvalue / hours;
    day = cvalue;
    cout << value << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes, " << second << " seconds\n";
    return 0;
}
