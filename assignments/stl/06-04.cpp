/*
 Assignment: 06
 Problem: 04
 Topic: list
 Description: Write a function to sort a list of 10 integer values.
 Date: 03-03-2026
*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
void sort(list<int>&);
void display(list<int>&);
void swap(vector<int>::iterator,vector<int>::iterator);
int main()
{
    list <int> l1={22,33,55,1,0,56,100,-10,5,8};
    display(l1);
    sort(l1);
    display(l1);
    return 0;
}

void sort(list <int> &l)
{
    vector <int> v1;
    for(list<int>::const_iterator cit=l.cbegin();cit!=l.cend();cit++)
        v1.push_back(*cit);
    l.clear();
    for(int i=1;i<v1.size();i++)
        for(vector<int>::iterator it=v1.begin();it!=v1.end()-i;it++)
            if(*it>*(it+1))
                swap(it,it+1);
    for(vector<int>::const_iterator cit=v1.cbegin();cit!=v1.cend();cit++)
        l.push_back(*cit);
}

void display(list <int> &l)
{
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
}

void swap(vector<int>::iterator left,vector<int>::iterator right)
{
    int temp;
    temp=*left;
    *left=*right;
    *right=temp;
}