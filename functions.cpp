// Created by user on 7/15/2025.
/*
 * Exercises to do
 * write a function that tells if a number is even or odd
 * write a fxn that prints the elements inside a string array against its prices onside an integer array
 * write a function that
 */
#include<iostream>
using namespace std;

bool check(int a);
int main()
{
    int a;
    cout << "Enter #1:";
    cin >> a;

    if (a % 2 == 0)
        cout << a << " is even" << endl;
    else cout << a << " is odd" << endl;
    cout << check(a) << endl;

    return 0;
}
 int check(int a);

/*
int main() {
    // Functions
    int addNum(int a, int b);
    int man(); {
        int num1;
        int num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int res = addNum(num1, num2);
        cout << "The  sum is: " << res;

        return 0;
    }

    int addNum(int a, int b);
    {
        return a + b;
    }

    return 0;
}
*/