// Created by user on 8/5/2025.

#include<iostream>
using namespace std;

class Bar {
private:
    int drink;
    int people;

public:
    // Parameterized constructor
    Bar(int d, int p){
        drink = d;
        people = p;
    }

    int totalCash() {
        return drink * people;
    }

};

int main(){
    Bar b(40, 35);
    cout << "Total cash collected: "
         << b.totalCash() <<  endl;
    return 0;
    //
}