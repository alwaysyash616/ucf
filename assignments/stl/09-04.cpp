/*
 Assignment: 09
 Problem: 04
 Topic: stack
 Description: Write a function to delete middle element of the stack.
 Date: 04-03-2026
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{

    return 0;
}

void deleteMiddleElement(stack <int> &s)
{
    vector <int> temp;
    if(s.empty())
        return;
    while(!s.empty())
    {
        temp.push_back(s.top());
        s.pop();
    }
    if(temp.size()&1)
        temp.erase(temp.end()-(temp.size()+1)/2);
    else
        temp.erase(temp.end()-temp.size()/2-1);
    for(vector<int>::const_reverse_iterator crit=temp.crbegin();crit!=temp.crend();crit++)
        s.push(*crit);
}