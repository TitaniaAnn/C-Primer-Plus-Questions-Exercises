//
//  main.cpp
//  Chapter02Exercise06
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that asks the user to enter an hour value and a minute value. The main()
//  function should then pass these two values to a type void function that displays the two
//  values in the format shown in the following sample run:
//
//  Enter the number of hours: 9
//  Enter the number of minutes: 28
//  Time: 9:28

#include <iostream>
using namespace std;

void printdata(int h, int m)
{
    printf("Time : %d:%d \n", h, m);
    return;
}

int main(int argc, const char * argv[]) {
    int hr, min;
    cout << "Enter the number of hours: ";
    cin >> hr;
    cout << "Enter the number of minutes: ";
    cin >> min;
    printdata(hr, min);
    return 0;
}
