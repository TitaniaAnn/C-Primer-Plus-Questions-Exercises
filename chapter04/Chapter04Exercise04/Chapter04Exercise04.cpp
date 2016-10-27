//
//  main.cpp
//  Chapter04Exercise04
//
//  Created by Cynthia Brown on 4/1/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that asks the user to enter his or her first name and then there last name, and
//  that then constructs, stores, and displays a third string consisting of the user's last name
//  followed by a comma, a space, and first name. Use string objects and methods from the string header
//  file. A sample run could look like this:
//
//  Enter your first name: Flip
//  Enter your last name: Fleming
//  Here's the information in a single string: Fleming, Flip

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string fname, lname, full_name;
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your last name: ";
    cin >> lname;
    full_name = lname + ", " + fname;
    cout << "Here's the information in a single string: " << full_name << "\n";
    return 0;
}
