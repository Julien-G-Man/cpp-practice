//
// Created by user on 6/17/2025.
//
#include<iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter a month:  ";
    cin >> month;

    //Switch stands as an alternative to if-else statements
    switch(month) {
    case 1:
        cout << "It is January";
        break;

    case 2:
        cout << "It is February";
        break;

    case 3:
        cout << "It is March";
        break;

    default:
        cout << "Enter a number  from (1-12)";
    }

    return 0;
}