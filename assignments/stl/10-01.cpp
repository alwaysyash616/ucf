/*
 Assignment: 10
 Problem: 01
 Topic: queue
 Description: Implement stack using queue.
 Date: 04-03-2026
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Stack
{
    private:
        queue <int> Stack;
    public:
        void push(int data)
        {
            vector <int> temp;
            temp.push_back(data);
            while (!Stack.empty())
            {
                temp.push_back(Stack.front());
                Stack.pop();
            }
            for(vector<int>::const_iterator cit=temp.cbegin();cit!=temp.cend();cit++)
                Stack.push(*cit);                            
        }
        void pop()
        {
            if(!Stack.empty())
                Stack.pop();
        }
        int top()
        {
            if(!Stack.empty())
                return Stack.front();
            throw "Stack Underflow";
        }
};
int main()
{

    return 0;
}