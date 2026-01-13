//
// Created by user on 6/20/2025.
//

//
// Created by user on 6/17/2025.
//
#include <iostream>
#include <cmath>
using namespace std;

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

    cout << "******** CALCULATOR ********" << endl;

    cout << "Here is what you can do:" << endl;
    cout << "[1] - Addition" << endl;
    cout << "[2] - Subtraction" << endl;
    cout << "[3] - Multiplication" << endl;
    cout << "[4] - Division" << endl;
    cout << "[5] - Quadratic Equations" << endl;
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

        default:
            cout << "Please choose from the available options (1, 2, 3 and 4)!" << endl;
            break;
    }

    cout << "****************************";

    return 0;
}
