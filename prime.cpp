// Created by user on 1/17/2026.

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i){
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;    }

    return 0;
}
