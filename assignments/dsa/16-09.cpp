/*
 Assignment: 16
 Problem: 09
 Topic: Recursion
 Description: Write a recursive function to calculate HCF of two numbers
 Date: 21-02-2026
*/
#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<gcd(x,y);
    cout<<endl;
    return 0;
}
int gcd(int a,int b)
{
    if(a==0 && b==0)
        throw "Unexpected";
    else if(a==0 && b)
        return b;
    else if(a && b==0)
        return a;
    else if(a==b)
        return a;
    else
    {
        if(a<b)
        {
            if(b%a==0)
                return a;
            else
                return gcd(b%a,a);
        }
        else
        {
            if(a%b==0)
                return b;
            else
                return gcd(a%b,b);
        }
    }
}