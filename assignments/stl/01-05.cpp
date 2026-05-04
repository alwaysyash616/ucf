/*
 Assignment: 01
 Problem: 05
 Topic: Template Function
 Description: Define a function template to find the greatest element among the values stored in an array of any type.
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
X findMaxInArray(X a[],int size)
{
    int i,index;
    for(i=0,index=0;i<size;i++)
        if(a[i]>a[index])
            index=i;
    return a[index];
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,0,9};
    float b[5]={0.3,1.3,2.5,6.4,7.8};
    char c[5]={'a','b','C','D','E'};

    cout<<findMaxInArray(a,10)<<endl;
    cout<<findMaxInArray(b,5)<<endl;
    cout<<findMaxInArray(c,5)<<endl;
    cout<<endl;
    return 0;
}