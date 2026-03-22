/*
 Assignment: 09
 Problem: 03
 Topic: Stack using linked list
 Description: In question 1, define a method to push a new element on to the Stack.
 Date: 16-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        int item;
        node *next;
};
class Stack
{
    private:
        node *top;
    public:
        Stack()
        {
            top=nullptr;
        }
        void push(int data)
        {
            node *temp=new node;
            temp->item=data;
            temp->next=top;
            top=temp;
        }
};
int main()
{

    return 0;
}