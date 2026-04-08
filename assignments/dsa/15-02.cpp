/*
 Assignment: 15
 Problem: 02
 Topic: Recursion
 Description: Write a recursive function to print first N natural numbers in reverse order
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printNaturalNumbersReverse(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printNaturalNumbersReverse(x);
    cout<<endl;
    return 0;
}
void printNaturalNumbersReverse(int n)
{
    if(n<1)
        throw "Invalid Input";
    if(n>1)
    {
        cout<<n<<" ";
        printNaturalNumbersReverse(n-1);
    }
    else
        cout<<n;
}