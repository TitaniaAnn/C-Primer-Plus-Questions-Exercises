//
//  main.cpp
//  Chapter04Exercise07
//
//  Created by Cynthia Brown on 4/1/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following
//  information:
//   - The name of the pizza company,which can consist of more then one word
//   - The diameter of the pizza
//   - The weight of the pizza
//  Devise a structure that can hold this information and write a program that uses a structure
//  variable of that type. The program should then ask the user to enter each of the preceding items
//  of information, and then the program should display that information. Use cin (or its methods) and cout.

#include <iostream>
#include <vector>
using namespace std;

struct PizzaStats
{
    char name[50];
    double diameter;
    double weight;
};

int main(int argc, const char * argv[]) {
    cout << "Pizza Analysis Service \n";
    vector<PizzaStats> pizzas;
    int a = 0;
    while (a == 0) {
        
        
        cin >> a;
    }
    cout << "Enter the name of the pizza company: ";
    
    
    return 0;
}
