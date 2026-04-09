/*
 Assignment: 16
 Problem: 05
 Topic: Recursion
 Description: Write a recursive function to calculate factorial of a number
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<factorial(x);
    cout<<endl;
    return 0;
}
int factorial(int n)
{
    if(n<0)
        throw "Invalid Input";
    else if(n>0)
        return n*factorial(n-1);
    else
        return 1;
}