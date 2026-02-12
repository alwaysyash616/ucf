/*
 Assignment: 05
 Problem: 05
 Topic: Functions in C++
 Description: Write functions using function overloading to add two numbers having different datatypes.
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
float add(int,float);
float add(float,int);
int main()
{
    int x=3,y=4;
    float p=3.0,q=4.0;
    cout<<add(x,y)<<endl<<add(p,q)<<endl<<add(p,y)<<endl<<add(x,q);
    cout<<endl;
    return 0;
}

int add(int a,int b)
{
    return a+b;
}

float add(float a,float b)
{
    return a+b;
}

float add(int a,float b)
{
    return a+b;
}

float add(float a,int b)
{
    return a+b;
}