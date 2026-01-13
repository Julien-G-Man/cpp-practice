// Created by user on 6/11/2025.
/*
C++ Challenge: “Odd but Even?”
Write a C++ program that:

Asks the user to enter a positive integer N.

Then it should print all the even numbers from 1 to N, but skip the numbers that are divisible by 4.

Finally, it should count how many numbers were printed and display the total count.
 */

#include<iostream>
using namespace std;

int main()
{
 int number, count = 0;

 cout << "Enter a positive integer:  ";
 cin >> number;
 cout << "You entered:  " << number << endl;

 for (int i = 1; i <= number; i++)
 {
  if (i % 2 == 0 and i % 4 != 0)
  {
   cout << i << " ";
   count++;
  }
 }
 cout << "\nTotal numbers printed:  " << count << endl;

 return 0;
}

