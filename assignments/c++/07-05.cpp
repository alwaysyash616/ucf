/*
 Assignment: 07
 Problem: 05
 Topic: More on Functions in C++
 Description: Define a function to merge two sorted array of same size.
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
int* merge(int*,int*,int);
int main()
{
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10};
    int *p=merge(a,b,5);
    int i;
    for(i=0;i<10;i++)
        cout<<p[i]<<" ";
    cout<<endl;
    return 0;
}

int* merge(int *p,int *q,int size)
{
    int *res=(int*)malloc(2*size*sizeof(int));
    int i;
    for(i=0;i<2*size;i++)
    {
        if(i<size)
            res[i]=p[i];
        else
            res[i]=q[i-size];
    }
    return res;
}