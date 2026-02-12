/*
 Assignment: 06
 Problem: 01
 Topic: More on Functions in C++
 Description: Define a C++ function to sort an array of integers in ascending or descending order depending on bool type argument (true for ascending and false for descending). Use default argument to implement it.
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
void sort(int*,bool=true);
int main()
{
    int a[10],i;
    cout<<"Enter 10 numbers: ";
    for(i=0;i<10;i++)
        cin>>a[i];
    sort(a);
    for(i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    sort(a,false);
    for(i=0;i<10;i++)
            cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

void sort(int *p,bool x)
{
    int i,j;
    if(x==false)
    {
        for(j=0;j<9;j++)
            for(i=0;i<9-j;i++)
                if(p[i]<p[i+1])
                    p[i+1]=(p[i]+p[i+1])-(p[i]=p[i+1]);
    }
    if(x==true)
    {
        for(j=0;j<9;j++)
            for(i=0;i<9-j;i++)
                if(p[i]>p[i+1])
                    p[i+1]=(p[i]+p[i+1])-(p[i]=p[i+1]);
    }
}