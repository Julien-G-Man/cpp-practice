#include<iostream>
using namespace std;

int main() {
    int a = 1;
    for(a; a <= 10; a++) {
        cout<<a<<endl;
    }
    cout<<"Out of loop!"<<endl;
    
    return 0;
}
//
// Created by user on 6/27/2025.
//
#include<iostream>
using namespace std;

int main()
{
    for (int a=0; a <= 10; a++)
    {
        cout<<a<<endl;
    }
    cout<<"Out of range! \t\t\t";
    int b =0;
    while (b!=10)
    {
        cout<<b<<endl;
        b+=1;
    }

    cout<<"Out of range";
    return 0;
}