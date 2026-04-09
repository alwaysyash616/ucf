/*
 Assignment: 16
 Problem: 01
 Topic: Recursion
 Description: Write a recursive function to calculate sum of first N natural numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<sum(x);
    cout<<endl;
    return 0;
}
int sum(int n)
{
    if(n<1)
        throw "Invalid Input";
    else if(n>1)
        return n+sum(n-1);
    else
        return 1;
}