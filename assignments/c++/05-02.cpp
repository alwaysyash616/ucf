/*
 Assignment: 05
 Problem: 02
 Topic: Functions in C++
 Description: Write a C++ function using the default argument that is able to add 2 or 3 numbers.
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b,c)<<endl;
    cout<<"Sum of first two numbers is "<<add(a,b);
    cout<<endl;
    return 0;
}

int add(int a,int b,int c)
{
    return a+b+c;
}