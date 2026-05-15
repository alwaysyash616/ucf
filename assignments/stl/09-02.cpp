/*
 Assignment: 09
 Problem: 02
 Topic: stack
 Description: Reverse a stack of strings.
 Date: 04-03-2026
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void reverseStack(stack <string>&);
int main()
{
    // stack <string> s1;
    cout<<endl;
    return 0;
}

void reverseStack(stack <string> &s)
{
    vector <string> temp;
    while (!s.empty())
    {
        temp.push_back(s.top());
        s.pop();
    }
    for(vector<string>::const_iterator cit=temp.begin();cit!=temp.end();cit++)
        s.push(*cit);
}