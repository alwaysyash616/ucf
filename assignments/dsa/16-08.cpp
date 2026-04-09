/*
 Assignment: 16
 Problem: 08
 Topic: Recursion
 Description: Write a recursive function to find nth term of the Fibonacci series
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    try
    {
        cout<<fibonacci(x);
    }
    catch(const char e[14])
    {
        cout<<e<<endl;
    }
    
    cout<<endl;
    return 0;
}
int fibonacci(int n)
{
    if(n<=0)
        throw "Invalid Input";
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}