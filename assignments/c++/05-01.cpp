/*
 Assignment: 05
 Problem: 01
 Topic: Functions in C++
 Description: Define a C++ function to swap data of two int variables using call by reference
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    swap(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}

void swap(int &x,int &y)
{
    y=(x+y)-(x=y);
}