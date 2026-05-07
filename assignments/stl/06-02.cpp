/*
 Assignment: 06
 Problem: 02
 Topic: list
 Description: Write a function to create a list from a given vector of integers.
 Date: 03-03-2026
*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
list<int> createList(vector<int>&);
int main()
{
    vector <int> v1={1,2,3,4,5,6};
    list <int> l1=createList(v1);
    return 0;
}

list<int> createList(vector <int> &v)
{
    list <int> temp;
    for(auto x:v)
        temp.push_back(x);
    return temp;
}