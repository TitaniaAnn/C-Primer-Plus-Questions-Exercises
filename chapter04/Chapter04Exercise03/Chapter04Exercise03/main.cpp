//
//  main.cpp
//  Chapter04Exercise03
//
//  Created by Cynthia Brown on 4/1/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a program that asks the user to enter his or her first name and then last name, and
//  that then constructs, stores, and displays a third string, consisting of the user's last name
//  followed by a comma, a space, and first name. Use char arrays and functions from the cstring
//  header file. A sample run could look like this:
//
//  Enter your first name: Flip
//  Enter your last name: Fleming
//  Here's the information in a single string: Fleming, Flip

#include <iostream>
#include <string>
using namespace std;
const int array_length = 50;

int main(int argc, const char * argv[]) {
    string lname, fname;
    char full_name[array_length];
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your last name: ";
    cin >> lname;
    lname += ", ";
    lname += fname;
    
    cout << "Here's the information in a single string: " << lname << "\n";
    
    return 0;
}
