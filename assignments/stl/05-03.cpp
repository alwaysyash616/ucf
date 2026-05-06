/*
 Assignment: 05
 Problem: 03
 Topic: vector
 Description: Create a vector of vectors of integer values from a given vector of integers such that each vector inside a vector contains sorted integer elements that appears in the given vector in consecutive places. For example, given vector has {2,4,10,5,7,6,15,20,3,9} values then the resulting vector contains 4 vectors {2,4,10}, {5,7},{6,15,20} and {3,9}
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> splitIncreasingSequences(vector <int>&);
void display(const vector<int>&);
void display(const vector<vector<int>>&);
int main()
{
    vector <int> v1={2,4,10,5,7,6,15,20,3,9};
    display(splitIncreasingSequences(v1));
    
    cout<<endl;
    return 0;
}

void display(const vector <int> &v)
{
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}

void display(const vector <vector<int>> &v)
{
    for(auto x:v)
        display(x);
}

vector<vector<int>> splitIncreasingSequences(vector <int> &v)
{
    vector <vector<int>> temp1;
    vector <int> temp2;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        temp2.push_back(*it);
        if(it+1==v.end() || *it>=*(it+1))
        {
            temp1.push_back(temp2);
            temp2.clear();
        }
    }
    return temp1;
}