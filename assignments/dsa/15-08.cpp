/*
 Assignment: 15
 Problem: 08
 Topic: Recursion
 Description: Write a recursive function to print squares of first N natural numbers in reverse order
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printSquaresReverse(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printSquaresReverse(x);
    cout<<endl;
    return 0;
}
void printSquaresReverse(int n)
{
    if(n<1)
        throw "Invalid Input";
    if(n>1)
    {
        cout<<n*n<<" ";
        printSquaresReverse(n-1);
    }
    else
        cout<<n*n;
}