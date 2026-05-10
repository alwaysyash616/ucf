/*
 Assignment: 08
 Problem: 03
 Topic: deque
 Description: Write a function to count frequency of all the elements of the deque.
 Date: 03-03-2026
*/
#include<iostream>
#include<deque>
using namespace std;
void countFrequencies(deque <int>&);
void sort(deque <int>&);
void swap(deque<int>::iterator,deque<int>::iterator);
int main()
{
    deque <int> d1={1,2,2,3,1,4,2};
    sort(d1);
    countFrequencies(d1);
    cout<<endl;
    return 0;
}

// This was a doubt, because it's only asked to countFrequencies and I am printing them.
void countFrequencies(deque <int> &d)
{
    int count=1;
    for(deque<int>::iterator it=d.begin();it!=d.end();it++)
    {
        if(it<d.end()-1)
        {
            if(*it!=*(it+1))
            {
                cout<<*it<<": "<<count<<endl;
                count=1;
            }
            else
                count++;
        }
        else
            cout<<*it<<": "<<count<<endl;
    }
}

void sort(deque <int> &d)
{
    for(int i=1;i<d.size();i++)
        for(deque<int>::iterator it=d.begin();it!=d.end()-i;it++)
            if(*it>*(it+1))
                swap(it,it+1);
}

void swap(deque<int>::iterator i,deque<int>::iterator j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}