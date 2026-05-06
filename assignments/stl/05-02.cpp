/*
 Assignment: 05
 Problem: 02
 Topic: vector
 Description: Create a vector object with three integer values. Now insert 25 three times just before the last element (call insert method only once).
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&);
int main()
{
    vector <int> v1={1,2,3};
    display(v1);
    if(!v1.empty())
        v1.insert(v1.end()-1,{25,25,25});
    display(v1);
    return 0;
}

void display(vector <int> &v)
{
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}