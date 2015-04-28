//
//  main.cpp
//  Chapter04Exercise02
//
//  Created by Cynthia Brown on 4/1/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Rewrite Listing 4.4, using the C++ string class instead of char arrays.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // const int ArSize = 20;
    // char name[ArSize];
    // char dessert[ArSize];
    string name, dessert;
    
    cout << "Enter your name: \n";
    // cin.getline(name, ArSize);  // reads through newline
    cin >> name;
    cout << "Enter your favorite dessert: \n";
    // cin.getline(dessert, ArSize);
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
