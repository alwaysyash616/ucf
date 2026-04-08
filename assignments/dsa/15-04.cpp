/*
 Assignment: 15
 Problem: 04
 Topic: Recursion
 Description: Write a recursive function to print first N odd natural numbers in reverse order
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printOddNumbersReverse(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printOddNumbersReverse(x);
    cout<<endl;
    return 0;
}
void printOddNumbersReverse(int n)
{
    if(n<1)
        throw "Invalid Input";
    if(n>1)
    {
        cout<<2*n-1<<" ";
        printOddNumbersReverse(n-1);
    }
    else
        cout<<2*n-1;
}