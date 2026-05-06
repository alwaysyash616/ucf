/*
 Assignment: 05
 Problem: 01
 Topic: vector
 Description: Write a function to delete all the values from the first negative value occurred in a given vector of integers.
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&);
void deleteAfterFirstNegative(vector<int>&);
int main()
{
    vector <int> v1={5,8,3,-2,10,7};
    vector <int> v2={-5,2,3,4};
    vector <int> v3={1,2,3,4,5};
    vector <int> v4={10,20,30,-1};
    vector <int> v5={4,6,-2,-5,9,10};
    vector <int> v6={-1,-2,-3};
    vector <int> v7={-10};
    vector <int> v8={10};
    vector <int> v9={5,0,3,-1,7};

    deleteAfterFirstNegative(v1);
    display(v1);
    deleteAfterFirstNegative(v2);
    display(v2);
    deleteAfterFirstNegative(v3);
    display(v3);
    deleteAfterFirstNegative(v4);
    display(v4);
    deleteAfterFirstNegative(v5);
    display(v5);
    deleteAfterFirstNegative(v6);
    display(v6);
    deleteAfterFirstNegative(v7);
    display(v7);
    deleteAfterFirstNegative(v8);
    display(v8);
    deleteAfterFirstNegative(v9);
    display(v9);

    return 0;
}

void display(vector <int> &v)
{
    if(v.empty())
        return;
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}

void deleteAfterFirstNegative(vector <int> &v)
{
    int n;
    vector<int>::iterator i;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        if(*it<0)
            break;
    v.erase(it,v.end());
    /*
    if(it!=v.end())
    {
        n=v.end()-it;
        while(n)
        {
            v.pop_back();
            n--;
        }
    }
    */
}