//
//  main.cpp
//  Chapter02Exercise03
//
//  Created by Cynthia Brown on 3/31/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a C++ program that uses three user-defined functions (counting main() as one)
//  and produces the following output:
//
//  Three blind mice
//  Three blind mice
//  See how they run
//  See how they run
//
//  One function, called two times, should produce the first two lines, and the remaining
//  fuction, also called twice, should produce the remaining output.

#include <iostream>
using namespace std;

void p1()
{
    cout << "Three blind mice" << endl;
    return;
}

void p2()
{
    cout << "See how they run" << endl;
    return;
}

int main(int argc, const char * argv[]) {
    p1();
    p1();
    p2();
    p2();
    return 0;
}
