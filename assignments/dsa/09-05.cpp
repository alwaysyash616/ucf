/*
 Assignment: 09
 Problem: 05
 Topic: Stack using linked list
 Description: In question 1, define a method to pop the top element of the stack.
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
        int peek()
        {
            if(top)
            {
                return top->item;
            }
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        int pop()
        {
            int val;
            if(top)
            {
                node *p=top;
                top=p->next;
                val=p->item;
                delete p;
                return val;
            }
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
};
int main()
{

    return 0;
}

// Note: Returning -1 for an empty stack can be ambiguous if -1 is a valid value.
// Proper handling (e.g., exceptions) is not used here as the focus is on DSA concepts.

// Exception handling was covered at the end of my C++ course, and I haven’t revised it yet.
// Currently focusing on DSA, so advanced error handling is not implemented here.