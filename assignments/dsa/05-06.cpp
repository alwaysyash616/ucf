/*
 Assignment: 05
 Problem: 06
 Topic: Doubly Linked List
 Description: In question 1, define a method to insert a data into the list after the specified node of the list.
 Date: 12-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        node *prev;
        int item;
        node *next;
};
class DLL
{
    private:
        node *start;
    public:
        DLL()        
        {
            start=nullptr;
        }
        bool isEmpty()
        {
            if(start==nullptr)
                return true;
            return false;
        }
        void insertAtFirst(int data)
        {
            node *temp=new node;
            temp->prev=nullptr;
            temp->item=data;
            temp->next=start;
            if(!isEmpty())
                start->prev=temp;
            start=temp;
        }
        void insertAtLast(int data)
        {
            int i;
            node *p=start;
            node *temp=new node;
            if(p)
            {
                while(p->next)
                    p=p->next;
                temp->prev=p;
                p->next=temp;
            }
            else
            {
                temp->prev=nullptr;
                start=temp;
            }
            temp->item=data;
            temp->next=nullptr;
            
        }
        node* search(int data)
        {
            node *p=start;
            while(p)
            {
                if(p->item==data)
                    return p;
                p=p->next;
            }
            return nullptr;
        }
        void insertAfter(int data1,int data2)
        {
            node *p=search(data1);
            if(p)
            {
                node *temp=new node;
                temp->prev=p;       
                temp->item=data2;
                temp->next=p->next;
                if(p->next)
                    p->next->prev=temp;
                p->next=temp;
            }
        }
};
int main()
{
    
    return 0;
}