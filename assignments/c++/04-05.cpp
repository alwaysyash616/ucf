/*
 Assignment: 04
 Problem: 05
 Topic: Functions in C++
 Description: Define a C++ function to check wheather a given number is a term in a Fibonacci series or not.
 Date: 13-01-2026
*/
#include<iostream>
using namespace std;
int main()
{
    int x;
    int fibonacci(int);
    cout<<"Enter a number: ";
    cin>>x;
    cout<<fibonacci(x);
    cout<<endl;
    return 0;
}

int fibonacci(int a)
{
    int x=0,y=1,z;
    if(a==0 || a==1)
        return 1;
    for(;;)
    {
        z=x+y;
        if(a==z)
            return 1;
        if(z>a)
            return 0;
        x=y;
        y=z;
    }
}