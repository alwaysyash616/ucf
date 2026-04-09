/*
 Assignment: 16
 Problem: 07
 Topic: Recursion
 Description: Write a recursive function to print binary of a given decimal number
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printBinary(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printBinary(x);
    cout<<endl;
    return 0;
}
void printBinary(int n)
{
    if(n<0)
        n*=-1;
    if(n==0 || n==1)
    {
        cout<<n;
        return;
    }
    else
    {
        printBinary(n/2);
        cout<<n%2;
    }
}