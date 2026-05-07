/*
 Assignment: 06
 Problem: 05
 Topic: list
 Description: Create a list from a given vector of integer values, such that even values are stored at the front of the list and odd values are stored at the end of the list.
 Date: 03-03-2026
*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
void display(list<int>&);
int main()
{
    vector <int> v1={1,2,3,4,5,6,7,8,9,10};
    list <int> l1;
    for(vector<int>::const_iterator cit=v1.cbegin();cit!=v1.cend();cit++)
        if(*cit&1)
            l1.push_back(*cit);
        else
            l1.push_front(*cit);
    display(l1);
    cout<<endl;
    return 0;
}

void display(list <int> &l)
{
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
}