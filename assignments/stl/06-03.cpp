/*
 Assignment: 06
 Problem: 03
 Topic: list
 Description: Find the greatest number in the given list of integers.
 Date: 03-03-2026
*/
#include<iostream>
#include<list>
using namespace std;
list<int>::const_iterator findGreatest(list<int>&);
int main()
{
    list <int> l1={10,5,80,25,60};   
    cout<<*findGreatest(l1);
    cout<<endl;
    return 0;
}

list<int>::const_iterator findGreatest(list <int> &l)
{
    list<int>::const_iterator cit=l.cbegin();
    for(list<int>::const_iterator it=l.cbegin();it!=l.cend();it++)
        if(*it>*cit)
            cit=it;
    return cit;
}