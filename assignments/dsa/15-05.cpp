/*
 Assignment: 15
 Problem: 05
 Topic: Recursion
 Description: Write a recursive function to print first N even natural numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printOddNumbers(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printOddNumbers(x);
    cout<<endl;
    return 0;
}
void printOddNumbers(int n)
{
    if(n<1)
        throw "Invalid Input";
    if(n>1)
    {
        printOddNumbers(n-1);
        cout<<" "<<2*n;
    }
    else
        cout<<2*n;
}