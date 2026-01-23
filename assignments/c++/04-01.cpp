/*
 Assignment: 04
 Problem: 01
 Topic: Functions in C++
 Description: Define a C++ function to print all prime numbers between two given numbers
 Date: 13-01-2025
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    void primes(int,int);
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    primes(a,b);
    cout<<endl;
    return 0;
}

void primes(int x,int y)
{
    int i;
    for(;x<y;x++)
    {
        i=2;
        while(i<x)
        {
            if(x%i==0)
                break;
            i++;
        }
        if(i==x)
            cout<<x<<" ";
    }
}