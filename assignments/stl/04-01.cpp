/*
 Assignment: 04
 Problem: 01
 Topic: vector
 Description: Create a vector object and initialise it with 5 integer values. Display vector values using subscript operator.
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1={11,22,33,44,55};
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    return 0;
}