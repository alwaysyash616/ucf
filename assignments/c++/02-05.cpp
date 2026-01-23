/*
 Assignment: 02
 Problem: 05
 Topic: Basics of C++
 Description: Write a C++ program to calculate the volume of a cuboid.
 Date: 10-01-2025
*/
#include<iostream>
int main()
{
    using namespace std;
    int l,b,h;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Volume of cuboid is: "<<l*b*h;
    cout<<endl;
    return 0;
}