//
// Created by user on 7/15/2025.
//
#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Arrays
    string names[3] = {"Julien", "Rexford", "Caleb"};

    int numArray[5] = {1,2,3,4,5};
    int numArray2[5];
    numArray2[0] = 1;
    numArray2[1] = 6;
    numArray2[2] = 7;
    numArray2[3] = 1;
    numArray2[4] = 3;

    cout <<numArray2 << endl;
    if (numArray2[0] != 1)
    {
        cout << "The value of the first variable is not 1." << endl;
        cout << numArray;
    } else
    {
        cout << "The first variable is a 1." << endl;
    }
    cout << names[0];
}


