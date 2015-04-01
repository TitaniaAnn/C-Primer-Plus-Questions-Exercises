//
//  main.cpp
//  cppch02
//
//  Created by Cynthia Brown on 3/30/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//

#include <iostream>
using namespace std;

// Exercise 01
void e01()
{
    cout << "Cynthia Brown" << endl << "1234 Somewhere dr" << endl << "Home, AZ 098765" << endl << endl << endl << endl;
    return;
}

// Exercise 02
void e02()
{
    const int furyar = 220;
    double lngth;
    cout << "Enter length in furlongs: ";
    cin >> lngth;
    cout << "Length is " << lngth * furyar << "ft!";
    return;
}

// Exercise 03
void p1()
{
    for (int a = 0; a < 2; a++)
    {
        cout << "Three blind mice" << endl;
    }
    return;
}

void p2()
{
    for (int a = 0; a < 2; a++)
    {
        cout << "See how they run" << endl;
    }
    return;
}

void e03()
{
    p1();
    p2();
    return;
}

// Exercise 04


int main(int argc, const char * argv[]) {
    // Exercise 01
    e01();
    e02();
    e03();
    
    return 0;
}


