/*
 Assignment: 16
 Problem: 03
 Topic: Recursion
 Description: Write a recursive function to calculate sum of first N even natural numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int sumEvenNumbers(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<sumEvenNumbers(x);
    cout<<endl;
    return 0;
}
int sumEvenNumbers(int n)
{
    if(n<1)
        throw "Invalid Input";
    else if(n>1)
        return 2*n+sumEvenNumbers(n-1);
    else
        return 2;
}