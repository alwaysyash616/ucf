/*
 Assignment: 03
 Problem: 04
 Topic: Basics of C++
 Description: Write a C++ program to find the maximum of two numbers.
 Date: 12-01-2026
*/
#include<iostream>
int main()
{
    using namespace std;
    int x,y;
    cout<<"Enter two numbers";
    cin>>x>>y;
    cout<<"Maximum: "<<(x>y?x:y);
    cout<<endl;
    return 0;
}