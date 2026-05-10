/*
 Assignment: 08
 Problem: 01
 Topic: deque
 Description: Create a deque of int values taken from user and display them using explicit iterator.
 Date: 03-03-2026
*/
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int> d1;
    int temp;
    cout<<"Enter 5 numbers: ";
    for(int i=0;i<5;i++)
    {
        cin>>temp;
        d1.push_back(temp);
    }
    for(deque<int>::iterator it=d1.begin();it!=d1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}