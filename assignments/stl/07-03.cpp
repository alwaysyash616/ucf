/*
 Assignment: 07
 Problem: 03
 Topic: forward_list
 Description: Write a function to find the total number of integers present in the forward_list which are greater then a given number.
 Date: 03-03-2026
*/
#include<iostream>
#include<forward_list>
using namespace std;
int countGreaterElements(forward_list<int>&,int);
int main()
{
    forward_list <int> l1={1,2,3,4,5,6,7,8,9,10};

    cout<<countGreaterElements(l1,2)<<" elements are Greater then "<<2;

    cout<<endl;
    return 0;
}

int countGreaterElements(forward_list <int> &l,int n)
{
    int count=0;
    for(forward_list<int>::const_iterator cit=l.cbegin();cit!=l.cend();cit++)
        if(*cit>n)
            count++;
    return count;
}