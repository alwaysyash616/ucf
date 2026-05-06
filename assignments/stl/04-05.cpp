/*
 Assignment: 04
 Problem: 05
 Topic: vector
 Description: Write a C++ function that returns the elements in a vector that are strictly smaller then their adjacent left and right neighbours.
 Date: 02-03-2026
*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>);
vector<int> collectLocalMinima(vector<int>);
int main()
{
    vector <int> v1={5,2,8,1,9,3,7};
    vector <int> v2={1,2,3,4,5};
    vector <int> v3={9,7,5,7,9};
    vector <int> v4={4,2,2,3,1};
    display(collectLocalMinima(v1));
    display(collectLocalMinima(v2));
    display(collectLocalMinima(v3));
    display(collectLocalMinima(v4));
    cout<<endl;
    return 0;
}

void display(vector <int> v)
{
    vector<int>::iterator it;
    if(v.empty())
        return;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}

vector<int> collectLocalMinima(vector <int> v)
{
    vector <int> temp;
    vector<int>::iterator it;
    for(it=v.begin()+1;it!=v.end()-1;it++)
        if(*it<*(it-1) && *it<*(it+1))
            temp.push_back(*it);
    return temp;
}