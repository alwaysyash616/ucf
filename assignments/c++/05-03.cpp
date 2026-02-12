/*
 Assignment: 05
 Problem: 03
 Topic: Functions in C++
 Description: Define overloaded functions to calculate area of circle, area of rectangle and area of traingle
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
float area(float);
float area(float,float);
float area(int,int);
int main()
{
    float l,b,r;
    int base,height;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Enter length and breadth of rectangle\n";
    cin>>l>>b;
    cout<<"Enter base and height of traingle\n";
    cin>>base>>height;
    cout<<"Area of Circle: "<<area(r)<<endl;
    cout<<"Area of Rectangle: "<<area(l,b)<<endl;
    cout<<"Area of Traingle: "<<area(base,height)<<endl;
    cout<<endl;
    return 0;
}

float area(float r)
{
    return 3.14*r*r;
}

float area(float a,float b)
{
    return a*b;
}

float area(int a,int b)
{
    return 0.5*a*b;
}