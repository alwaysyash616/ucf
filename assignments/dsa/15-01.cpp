/*
 Assignment: 15
 Problem: 01
 Topic: Recursion
 Description: Write a recursive function to print first N natural numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printNaturalNumbers(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printNaturalNumbers(x);
    cout<<endl;
    return 0;
}

void printNaturalNumbers(int n)
{
    if(n<1)
        throw "Invalid Input";
    if(n>1)
    {
        printNaturalNumbers(n-1);
        cout<<" "<<n;
    }
    else
        cout<<n;
}