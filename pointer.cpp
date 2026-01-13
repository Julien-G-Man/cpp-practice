// Created by user on 7/15/2025.
// Pointers in C++

#include<iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int* ptr = &num1;

    //use *ptr or num1
    cout << *ptr << endl;
    cout << num1 << endl;

    //use ptr or &num1
    cout << ptr << endl;
    cout << &num1 << endl;
}