/*
 Assignment: 08
 Problem: 02
 Topic: deque
 Description: Find the greatest element in a deque of int values.
 Date: 03-03-2026
*/
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int> d1={4,6,8,2,9};
    deque<int>::iterator i=d1.begin();
    for(deque<int>::iterator it=d1.begin();it!=d1.end();it++)
        if(*it>*i)
            i=it;
    cout<<"Greater: "<<*i;
    cout<<endl;
    return 0;
}