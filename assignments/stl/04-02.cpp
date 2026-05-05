/*
 Assignment: 04
 Problem: 02
 Topic: vector
 Description: Create a vector object and initialise it with 5 float values. Display vector values using at() method.
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <float> v1={1.1,2.2,3.3,4.4,5.5};
    for(int i=0;i<v1.size();i++)
        cout<<v1.at(i)<<" ";
    cout<<endl;
    return 0;
}