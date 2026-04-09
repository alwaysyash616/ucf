/*
 Assignment: 16
 Problem: 02
 Topic: Recursion
 Description: Write a recursive function to calculate sum of first N odd natural numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int sumOddNumbers(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<sumOddNumbers(x);
    cout<<endl;
    return 0;
}
int sumOddNumbers(int n)
{
    if(n<1)
        throw "Invalid Input";
    else if(n>1)
        return 2*n-1+sumOddNumbers(n-1);
    else
        return 1;
}