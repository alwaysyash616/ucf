/*
 Assignment: 01
 Problem: 03
 Topic: Template Function
 Description: Define a function template to print values of an array of any type.
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
void printValues(X a[],int size)
{
    int i;
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int a[5]={1,2,3,4,5};
    float b[5]={1.1,2.2,3.3,4.4,5.5};
    char c[5]={'A','B','C','D','E'};
    printValues(a,5);
    printValues(b,5);
    printValues(c,5);
    cout<<endl;
    return 0;
}