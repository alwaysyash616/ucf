/*
 Assignment: 04
 Problem: 03
 Topic: vector
 Description: Create a vector object and initialise it with 5 string values. Display vector values using implicit iterator.
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <string> v1={"Shrishti","Varsha","Shivangi","Divya","Beauty"};
    for(auto x : v1)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}