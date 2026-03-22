/*
 Assignment: 09
 Problem: 08
 Topic: Stack using linked list
 Description: In question 1, define a method to check wheather a given number is a palindrome or not using stack
 Date: 16-02-2026
*/
#include<iostream>
#include<cmath>
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
        ~Stack()
        {
            while(top)
                pop();
        }
        void reverse()
        {
            node *p,*q,*r;
            if(top && top->next)            
            {
                r=top;
                while(r->next)
                    r=r->next;
                q=r;
                do
                {
                    p=top;
                    while (p->next!=q)
                        p=p->next;
                    q->next=p;
                    q=p;
                } while(p!=top);
                p->next=nullptr;
                top=r;
            }
        }
};
bool palindrome(int);
int main()
{
    int a=12321;
    cout<<palindrome(a);
    cout<<endl;
    return 0;
}

bool palindrome(int num)
{
    Stack temp;
    int num2=num,t,a,i;
    for(;num2;num2/=10)
    {
        temp.push(num2%10);
    }
    a=temp.pop();
    for (i = 1; ; i++)
    {
        t=temp.pop();
        if(t!=-1)
            a+=t*pow(10,i);
        else
            break;
    }
    if(a==num)    
        return true;
    else
        return false;
}

// Note: Returning -1 for an empty stack can be ambiguous if -1 is a valid value.
// Proper handling (e.g., exceptions) is not used here as the focus is on DSA concepts.

// Exception handling was covered at the end of my C++ course, and I haven’t revised it yet.
// Currently focusing on DSA, so advanced error handling is not implemented here.


// reverse()
// This approach is quite complex and time-consuming. Upon review (ChatGPT), it appears
// to be resource-intensive, difficult to debug, and hard to maintain.
// The intermediate states during execution may also be unsafe.
// Although the logic works correctly, I am keeping this version
// for future reference and learning.