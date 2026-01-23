/*
 Assignment: 04
 Problem: 03
 Topic: Functions in C++
 Description: Define a C++ function to calculate x raised to the power y.
 Date: 13-01-2025
*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int exp(int,int);
    cout<<"Enter base: ";
    cin>>x;
    cout<<"Enter exponenet: ";
    cin>>y;
    cout<<"Answer: "<<exp(x,y);
    cout<<endl;
    return 0;
}

int exp(int a,int b)
{
    int x=a;
    for(;b>1;b--)
        x*=a;
    return x;
}