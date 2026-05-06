/*
 Assignment: 05
 Problem: 05
 Topic: vector
 Description: Create a vector from the given vector of three vectors of integers, such that take first 3 values from the first vector, last two values of the second vector and all the elements of the third vector
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <vector<int>> v1={{1,2,3,4,5},{10,20,30,40},{7,8,9}};
    vector <int> ans;
    ans.insert(ans.begin(),v1.at(0).begin(),v1.at(0).begin()+3);
    ans.insert(ans.end(),v1.at(1).end()-2,v1.at(1).end());
    ans.insert(ans.end(),v1.at(2).begin(),v1.at(2).end());

    for(auto x:ans)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}