/*
 Assignment: 15
 Problem: 07
 Topic: Recursion
 Description: Write a recursive function to print squares of first N natural numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printSquares(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printSquares(x);
    cout<<endl;
    return 0;
}
void printSquares(int n)
{
    if(n<1)
        throw "Invalid Input";
    if(n>1)
    {
        printSquares(n-1);
        cout<<" "<<n*n;
    }
    else
        cout<<n*n;
}