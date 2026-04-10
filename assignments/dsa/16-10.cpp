/*
 Assignment: 16
 Problem: 10
 Topic: Recursion
 Description: Write a recursive function to calculate x power y.
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int pow(int,int);
int main()
{
    int x,y;
    cout<<"Enter base: ";
    cin>>x;
    cout<<"Enter exponent: ";
    cin>>y;
    cout<<x<<" raised to the power "<<y<<" equals "<<pow(x,y);
    cout<<endl;
    return 0;
}
int pow(int a,int b)
{
    if(b==1)
        return a;
    else
        return a*pow(a,b-1);
}
