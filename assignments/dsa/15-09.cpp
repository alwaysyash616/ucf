/*
 Assignment: 15
 Problem: 09
 Topic: Recursion
 Description: Write a recursive function to print cubes of first N natural numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printCubes(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printCubes(x);
    cout<<endl;
    return 0;
}
void printCubes(int n)
{
    if(n<1)
        throw "Invalid Input";
    if(n>1)
    {
        printCubes(n-1);
        cout<<" "<<n*n*n;
    }
    else
        cout<<n*n*n;
}