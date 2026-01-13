// Created by user on 6/20/2025.

#include<iostream>
using namespace std;

int main()
{

    char country;
    char sanity;
    int age;

    cout << "Are you Ghanaian? Enter [y] for YES and [n] for NO:  ";
    cin >> country;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Please are you sane? Enter [y] for YES and [n] for NO: ";
    cin >> sanity;

    if (country == 'y' && sanity == 'y')
    {
        if (age >= 18)
        {
            cout << "You are allowed to vote.";
        } else
        {
            cout << "Come again once you are old enough." <<  endl;
            cout << "You will be eligible in " << 18 - age << " years";
        }
    }


    return 0;
}