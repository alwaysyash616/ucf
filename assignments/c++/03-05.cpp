/*
 Assignment: 03
 Problem: 05
 Topic: Basics of C++
 Description: Write a C++ program to add all the numbers of an array of size 10.
 Date: 12-01-2025
*/
#include<iostream>
int main()
{
    using namespace std;
    int a[10],i,sum=0;
    cout<<"Enter 10 numbers";
    cout<<endl;
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
        sum+=a[i];
    cout<<"Sum is "<<sum;
    cout<<endl;
    return 0;
}