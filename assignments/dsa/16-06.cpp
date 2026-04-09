/*
 Assignment: 16
 Problem: 06
 Topic: Recursion
 Description: Write a recursive function to calculate sum of the digits of a given number
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int sumOfDigits(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<sumOfDigits(x);
    cout<<endl;
    return 0;
}
int sumOfDigits(int n)
{
    if(n<0)
        n*=-1;
    if(n>0)
        return n%10+sumOfDigits(n/10);
    else
        return 0;
}