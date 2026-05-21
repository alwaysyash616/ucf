/*
 Assignment: 10
 Problem: 03
 Topic: queue
 Description: Given an integer k and queue of integers. Write a program to reverse the order of the first k elements of the queue.
 Date: 04-03-2026
*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    deque <int> d1;
    queue <int> q1;
    int k=4;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);
    for(int i=1;i<=k;i++)
    {
        d1.push_front(q1.front());
        q1.pop();
    }
    for(;!q1.empty();q1.pop())
        d1.push_back(q1.front());
    while (!d1.empty())
    {
        q1.push(d1.front());
        d1.pop_front();
    }
    
    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    
    cout<<endl;
    return 0;
}