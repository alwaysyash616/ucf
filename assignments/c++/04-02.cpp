/*
 Assignment: 04
 Problem: 02
 Topic: Functions in C++
 Description: Define a C++ function to find the highest value digit in a given number.
 Date: 13-01-2025
*/
#include<iostream>
using namespace std;
int main()
{
    int x;
    int digit(int);
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"highest digit: "<<digit(x);
    cout<<endl;
    return 0;
}

int digit(int a)
{
    int s=0;
    if(a==0)
        return 0;
    for(;a>0;a/=10)
    {
        if(a%10>s)
            s=a%10;
    }
    return s;
}