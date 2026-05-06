/*
 Assignment: 04
 Problem: 04
 Topic: vector
 Description: Create a vector object and initialise it with 5 integer values. Display vector values using explicit iterator.
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1={1,2,3,4,5};
    vector<int>::const_iterator cit;
    for(cit=v1.cbegin();cit!=v1.cend();cit++)
        cout<<*cit<<" ";
    cout<<endl;
    return 0;
}