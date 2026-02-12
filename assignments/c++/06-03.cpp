/*
 Assignment: 06
 Problem: 03
 Topic: More on Functions in C++
 Description: Define a C++ function to rotate an array by n positions in the d direction. Implement position and direction using default arguments. Argument d can be -1 or 1 denoting left or right direction. Argument n should be the last argument with default value 1.
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
void rotate(int*,int,int=1,int=1);
int main()
{
    int i;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    rotate(a,10);
    for(i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    rotate(a,10,-1,4);
    for(i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

void rotate(int *p,int size,int d,int n)
{
    int i,k;
    if(d==1)
    {
        for(k=1;k<=n;k++)
            for(i=size-1;i>0;i--)
                p[i]=(p[i]+p[i-1])-(p[i-1]=p[i]);
    }
    if(d==-1)
    {
        for(k=1;k<=n;k++)
            for(i=0;i<size-1;i++)
                p[i]=(p[i]+p[i+1])-(p[i+1]=p[i]);
    }
}