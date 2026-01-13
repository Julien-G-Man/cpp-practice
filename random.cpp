// Created by user on 6/4/2025.

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    const short maxValue = 6;
    const short minValue = 1;

    srand(time(0));
    short first = (rand()% (maxValue - minValue +1)) + minValue;
    short second = (rand()% (maxValue - minValue +1)) + minValue;

    cout << first <<", "<<second <<endl;

    return 0;
}

// rolling dice
// [rand()% (maxValue - minValue +1)] + minValue