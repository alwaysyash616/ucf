/*
 Assignment: 16
 Problem: 04
 Topic: Recursion
 Description: Write a recursive function to calculate sum of squares first N natural numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int sumOfSquares(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<sumOfSquares(x);
    cout<<endl;
    return 0;
}
int sumOfSquares(int n)
{
    if(n<1)
        throw "Invalid Input";
    else if(n>1)
        return n*n+sumOfSquares(n-1);
    else
        return 1;
}