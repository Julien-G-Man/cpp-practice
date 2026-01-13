// Created by user on 6/14/2025.
#include<iostream>
#include<cmath>
using namespace std;

// simple addition function
int sum(int a, int b) {
    return a + b;
}

void print(const string& text) {
   cout << text << endl;
}

//void function
void printNtimes(int n, const string& text) {
    for (int i = 0; i <= 10; i++)
    {
        //outputs squares of all integers between 1 and 9
        cout << pow(i, 2) << endl;
        cout << text << endl;
    }
}

//Default parameters
int doMath(int x, int y, int z = 1)
{
    return (x + y) * z;
}
// pass by value
void swap(int &m, int &n){
    int temp = m;
    m = n;
    n = temp;
}

int number;
int getNumber() {
    return number;
}

int main() {
    // doMath()
    cout << doMath(5,3); // z is not required cos it's been given a default value

    // sum()
    sum(5,6);
    sum(1,7);
    sum(2, 3);
    printNtimes(5, "I am hungry");

    // getNumber()
    /*
     * cout << getNumber << endl;
    cout << "Enter number: ";
    cin >> number;
    cout << "You entered number " << number << endl;
    */

    // pass by value
    int m, n;
    cout << "m: ";
    cin >> m;
    cout << "n: ";
    cin >> n;
    cout << "Swapping!" << endl;
    swap(m,n);
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;


    return 0;
}



