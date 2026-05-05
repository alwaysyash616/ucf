/*
 Assignment: 03
 Problem: 03
 Topic: array
 Description: Create an array object for int values of size 10. Take input from user. Find the greatest element of the array.
 Date: 02-03-2026
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,10> a1;
    array<int,10>::iterator it;
    array<int,10>::iterator greatest=a1.begin();
    for(it=a1.begin();it!=a1.end();it++)
        cin>>*it;
    for(it=a1.begin();it!=a1.end();it++)
        if(*it>*greatest)
            greatest=it;
    cout<<*greatest;
    cout<<endl;
    return 0;
}