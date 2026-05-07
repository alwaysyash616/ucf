/*
 Assignment: 07
 Problem: 01
 Topic: forward_list
 Description: Create an empty forward_list of int type values. Now assign four 10s and three 5s in it.
 Date: 03-03-2026
*/
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list <int> l1;
    l1.insert_after(l1.before_begin(),{10,10,10,10,5,5,5});
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}