/*
 Assignment: 08
 Problem: 04
 Topic: deque
 Description: Write a function to find the largest sorted subsequence in a deque of int values
 Date: 03-03-2026
*/
#include<iostream>
#include<deque>
using namespace std;
deque<deque<int>> splitIncreasingSequences(deque<int>&);
deque<int> findLargestSortedSubsequence(deque<int>&);
void display(deque<int>&);
int main()
{
    deque <int> d1={1,2,5,3,4,7,8,9,10,2};
    deque <int> ans=findLargestSortedSubsequence(d1);
    display(ans);
    cout<<endl;
    return 0;
}

void display(deque <int> &d)
{
    for(auto x:d)
        cout<<x<<" ";
    cout<<endl;
}

deque<int> findLargestSortedSubsequence(deque <int> &d)
{
    deque <deque<int>> temp=splitIncreasingSequences(d);
    deque<deque<int>>::const_iterator i=temp.cbegin();
    for(deque<deque<int>>::const_iterator cit=temp.cbegin();cit!=temp.cend();cit++)
        if((*cit).size()>(*i).size())
            i=cit;
    return *i;
}

deque<deque<int>> splitIncreasingSequences(deque <int> &d)
{
    deque <deque<int>> temp1;
    deque <int> temp2;
    deque<int>::const_iterator cit;
    if(!d.empty())
    {
        for(cit=d.cbegin();cit!=d.cend();cit++)
        {
            temp2.push_back(*cit);
            if(cit!=d.cend()-1 && *cit>=*(cit+1))
            {
                temp1.push_back(temp2);
                temp2.clear();
            }
        }
    }
    return temp1;
}