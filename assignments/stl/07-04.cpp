/*
 Assignment: 07
 Problem: 04
 Topic: forward_list
 Description: Write a function to erase first element from the given forward_list which is just greater then the given element.
 Date: 03-03-2026
*/
#include<iostream>
#include<forward_list>
using namespace std;
bool removeFirstGreaterThan(forward_list<int>&,int);
int main()
{
    forward_list <int> l1={1,10,3,9};
    removeFirstGreaterThan(l1,0);
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}

bool removeFirstGreaterThan(forward_list <int> &l,int n)
{
    forward_list<int>::iterator toDeleteAfter=l.before_begin();
    forward_list<int>::iterator it;

    for(it=l.begin();it!=l.end();it++)
    {
        if(*it>n)
            break;
        toDeleteAfter=it;
    }
    if(it!=l.end())
    {
        l.erase_after(toDeleteAfter);
        return true;
    }
    else
        return false;
}