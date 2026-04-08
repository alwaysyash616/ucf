/*
 Assignment: 15
 Problem: 10
 Topic: Recursion
 Description: Write a recursive function to print cubes of first N natural numbers in reverse order
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
void printCubesReverse(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    printCubesReverse(x);
    cout<<endl;
    return 0;
}
void printCubesReverse(int n)
{
    if(n<1)
        throw "Invalid Input";
    if(n>1)
    {
        cout<<n*n*n<<" ";
        printCubesReverse(n-1);
    }
    else
        cout<<n*n*n;
}