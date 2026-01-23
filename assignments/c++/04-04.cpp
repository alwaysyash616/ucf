/*
 Assignment: 04
 Problem: 04
 Topic: Functions in C++
 Description: Define a C++ function to print Pascal Traingle up to N lines.
 Date: 13-01-2025
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x;
    void pascal(int);
    cout<<"Enter a number: ";
    cin>>x;
    pascal(x);
    cout<<endl;
    return 0;
}

int ncr(int n,int r)
{
    return tgamma(n+1)/(tgamma(n-r+1)*tgamma(r+1));
}

void pascal(int n)
{
    int i,j,descision,r;
    for(i=1;i<=n;i++)
    {
        descision=1;
        r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-i+1 && j<=n+i-1 && descision==1)
            {
                if(i==1)
                    cout<<"1";
                else
                    cout<<ncr(i-1,r++);
            }
            else
            {
                cout<<" ";
            }
            if(j>=n-i+1 && j<=n+i-1)
                descision=descision==1?0:1;
        }
        cout<<endl;
    }
}