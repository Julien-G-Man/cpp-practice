// Created by user on 6/20/2025.
//
#include <iostream>
#include <cmath>
using namespace std;

double enter(double num1, double num2);

int factorial(int n) {
    int fact_result = 1;
    for (int i = 1; i <= n; ++i) {
        fact_result *= i;
    }
    return fact_result;
}

int main()
{
    char op;
    double num1;
    double num2;
    double result;
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double disc;
    int n, r;
    int fact_result;
    int factorial = 1;

    cout << "-------- CALCULATOR --------" << endl;

    cout << "Here is what you can do:" << endl;
    cout << "[1] - Addition" << endl;
    cout << "[2] - Subtraction" << endl;
    cout << "[3] - Multiplication" << endl;
    cout << "[4] - Division" << endl;
    cout << "[5] - Quadratic Equations" << endl;
    cout << "[6] - Find n factorial (n!)" << endl;
    cout << "[7] - Perform Permutation, nPr (coming soon)" << endl;
    cout << "[8] - Perform Combination, nCr (coming soon)" << endl;
    cout << endl;
    cout << "What operation do you want to perform?:  ";
    cin >> op;


    switch(op)
    {
        case '1':
            cout << "Enter #1: ";
            cin >> num1;
            cout << "Enter #2: ";
            cin >> num2;

            result = num1 + num2;
            cout << "result: " << result << endl;
             break;

        case '2':
            cout << "Enter #1: ";
            cin >> num1;
            cout << "Enter #2: ";
            cin >> num2;

            result = num1 - num2;
            cout << "result: " << result << endl;
            break;

        case '3':
            cout << "Enter #1: ";
            cin >> num1;
            cout << "Enter #2: ";
            cin >> num2;

            result = num1 * num2;
            cout << "result: " << result << endl;
            break;

        case '4':
            cout << "Enter #1: ";
            cin >> num1;
            cout << "Enter #2: ";
            cin >> num2;

            result = num1 / num2;
            cout << "result: " << result << endl;
            break;

        case '5':
            cout << "a: ";
            cin >> a;

            cout << "b: ";
            cin >> b;

            cout << "c: ";
            cin >> c;

            disc = pow(b, 2) - 4*a*c;
            x1 = (-b + sqrt(disc)) / (2*a);
            x2 = (-b - sqrt(disc)) / (2*a);

            cout << "x1: " << x1 << endl;
            cout << "x2: " << x2 << endl;

        case '6':
            cout << "n factorial = " << fact_result << endl;

        /*
            cout <<"Enter any number, n: ";
            cin >> n;
            for (int i = 1; i <= n; ++i) {
                factorial *= i;
            }
        */

        case '7':
            cout << "n: ";
            cin >> n;
            cout << "r: ";
            cin >> r;
            if (n > r) {
                for (int i = 1; i <+ n; ++i) {
                    factorial *= i;
                }
            } else {
                cout << "Error! " << n << " has to be greater than " << r << "!" << endl;
                break;
            }

            result = factorial / (n - r);
            cout << n << "P" << r << " = " << result << endl;


        default:
            cout << "Please choose from the available options (1, 2, 3 and 4)!" << endl;
            break;
    }

    cout << "----------------------------";

    return 0;
}


/*
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

*/


