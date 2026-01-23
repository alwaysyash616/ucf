/*
 Assignment: 03
 Problem: 03
 Topic: Basics of C++
 Description: Write a C++ program to swap values of two int variables without using third variable
 Date: 12-01-2025
*/
#include<iostream>
int main()
{
    using namespace std;
    int x,y;
    cout<<"Enter two numbers";
    cin>>x>>y;
    y=(x+y)-(x=y);
    cout<<"x: "<<x;
    cout<<endl;
    cout<<"y: "<<y;
    cout<<endl;
    return 0;
}