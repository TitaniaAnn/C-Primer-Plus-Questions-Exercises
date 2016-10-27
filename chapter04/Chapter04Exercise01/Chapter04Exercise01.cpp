//
//  main.cpp
//  Chapter04Exercise01
//
//  Created by Cynthia Brown on 4/1/15.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Write a C++ program that requests and displays information as shown in the following example
//  of output:
//
//  What is your first name? Betty Sue
//  What is your last name? Yew
//  What letter grade do you deserve? B
//  What is your age? 22
//  Name: Yew, Betty Sue
//  Grade: C
//  Age: 22
//
//  Note that the program should be able to accept first names that comprise of more then one word.
//  Also note that the program adjusts the grade downward - that is, up one letter. Assume that the
//  user requests an A, B, or C so that you don't have to worry about the gap between a D and an F.

#include <iostream>
using namespace std;
const char grades[] = {'A', 'B', 'C', 'D', 'F'};

char getGrade(char g)
{
    for (int a = 0; a < sizeof(grades); a++)
    {
        if (g == grades[a])
        {
            if (a < sizeof(grades) - 1)
            {
                return grades[a+1];
            }
            else
            {
                return grades[a];
            }
        }
    }
    return grades[2];
}

int main(int argc, const char * argv[]) {
    string fname, lname;
    char grade;
    int age;
    cout << "What is your first name? ";
    cin >> fname;
    cout << "What is your last name? ";
    cin >> lname;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age?";
    cin >> age;
    
    cout << "Name: " << lname << ", " << fname << "\n";
    cout << "Grade: " << getGrade(grade) << "\n";
    cout << "Age: " << age << "\n";
    
    return 0;
}
