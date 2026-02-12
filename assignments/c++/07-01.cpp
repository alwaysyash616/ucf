/*
 Assignment: 07
 Problem: 01
 Topic: More on Functions in C++
 Description: Define a function to calculate HCF of two numbers.
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
int hcf(int,int);
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"HCF: "<<hcf(a,b);
    cout<<endl;
    return 0;
}

int hcf(int x,int y)
{
    int k;
    if(x==0)
        return y;
    if(y==0)
        return x;
    if(x==y)
        return x;
    else if(x<y)
    {
        for(k=x;k>=1;k--)
            if(x%k==0 && y%k==0)
                return k;
    }
    else
    {
        for(k=y;k>=1;k--)
            if(x%k==0 && y%k==0)
                return k;
    }
}