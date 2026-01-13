//
// Created by user on 6/17/2025.
//
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char op;
    double num1, num2;
    double result;
    double a, b, c;
    double x, x1, x2;
    double disc;

    cout << "******** CALCULATOR ********" << endl;

    cout << "Here is what you can do:" << endl;
    cout << "[1] - Addition" << endl;
    cout << "[2] - Subtraction" << endl;
    cout << "[3] - Multiplication" << endl;
    cout << "[4] - Division" << endl;
    cout << "[5] - Quadratic Equations" << endl;
    cout << "What operation do you want to perform?:  ";
    cin >> op;

    switch(op) {
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
            cout << "------ Quadratic Equations ------" << endl;
            cout << "Given the equation ax^2 + bx + c" << endl;
            cout << "a: ";
            cin >> a;

            cout << "b: ";
            cin >> b;

            cout << "c: ";
            cin >> c;

            disc = pow(b, 2) - 4*a*c;
            if (disc == 0) {
                x = -b / (2*a);
                cout <<"x = " << x << endl;
            } else {
                x1 = (-b + sqrt(disc)) / (2*a);
                x2 = (-b - sqrt(disc)) / (2*a);

                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }

            if (disc > 0){
                cout << "The roots are real and distinct.";
            } else if (disc == 0) {
                cout << "The roots are real and equal.";
            } else {
                cout << "The roots are imaginary.";
            }

        default:
            cout << "Please choose from the available options (1, 2, 3 and 4)!" << endl;
            break;
    }
    return 0;
}