/*
 Assignment: 06
 Problem: 05
 Topic: More on Functions in C++
 Description: Define a function to print all prime factors of a given number. [ for example num=36, prime factors are 2, 3]
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
void primeFactors(int);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    primeFactors(x);
    cout<<endl;
    return 0;
}

int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
        if(n%i==0)
            break;
    if(i==n/2+1)
        return 1;
    else
        return 0;
}

void primeFactors(int n)
{
    int s;
    for(s=2;n!=1;s++)
    {
        if(prime(s) && n%s==0)
        {
            cout<<s<<", ";
            while(n%s==0)
                n/=s;
        }
    }
    cout<<"\b\b ";
}