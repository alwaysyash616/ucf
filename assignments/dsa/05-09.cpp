/*
 Assignment: 05
 Problem: 09
 Topic: Doubly Linked List
 Description: In question 1, define a method to delete a specific node.
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
        void deleteFirst()
        {
            if(!isEmpty())
            {
                node *p=start;
                start=start->next;
                if(start)
                    start->prev=nullptr;
                delete p;
            }
        }
        void deleteLast()
        {
            int i;
            if(!isEmpty())
            {
                node *p=start;
                while(p->next)
                    p=p->next;
                if(p->prev)
                    p->prev->next=nullptr;
                else
                    start=nullptr;
                delete p;
            }
        }
        void deleteNode(int data)
        {
            node *p=search(data);
            if(p)
            {
                if(p->prev && p->next)
                {
                    p->prev->next=p->next;
                    p->next->prev=p->prev;
                }
                else if(p->next)
                {
                    start=p->next;
                    p->next->prev=nullptr;
                }
                else if(p->prev)
                {
                    p->prev->next=nullptr;
                }
                else
                    start=nullptr;
                delete p;
            }
        }
};
int main()
{
    
    return 0;
}