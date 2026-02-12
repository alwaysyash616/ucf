/*
 Assignment: 07
 Problem: 04
 Topic: More on Functions in C++
 Description: Define a function to swap two arrays.
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
void swap(int*,int*,int);
int main()
{
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10};
    int i;
    swap(a,b);
    for(i=0;i<5;i++)
        cout<<a[i]<<" ";
    for(i=0;i<5;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}

void swap(int *p,int *q,int size)
{
    int i;
    for(i=0;i<size;i++)
        q[i]=(p[i]+q[i])-(p[i]=q[i]);
}