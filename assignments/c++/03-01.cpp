/*
 Assignment: 03
 Problem: 01
 Topic: Basics of C++
 Description: Write a C++ program to calculate average of 3 numbers.
 Date: 12-01-2026
*/
#include<iostream>
int main()
{
    using namespace std;
    int x,y,z;
    cout<<"Enter three numbers";
    cin>>x>>y>>z;
    cout<<"Average is: "<<(x+y+z)/3.0;
    cout<<endl;
    return 0;
}