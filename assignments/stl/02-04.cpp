/*
 Assignment: 02
 Problem: 04
 Topic: Template Class
 Description: Define data structure Doubly Linked List using class template
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
class node
{
    public:
        node <X> *prev;
        X item;
        node <X> *next;
};
template <typename X>
class DLL
{
    private:
        node <X> *start;
    public:
        DLL()
        {
            start=nullptr;
        }
        void insertAtFirst(X data)
        {
            node <X> *temp=new node<X>;
            temp->prev=nullptr;
            temp->item=data;
            temp->next=start;
            if(start)
                start->prev=temp;
            start=temp;            
        }
        void insertAtLast(X data)
        {
            node <X> *p=start;
            node <X> *temp=new node<X>;
            temp->item=data;
            temp->next=nullptr;
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
        }
        node<X>* search(X data)
        {
            node <X> *p=start;
            while(p)
            {
                if(p->item==data)
                    break;
                p=p->next;
            }
            return p;
        }
        bool insertAfter(X data1,X data2)
        {
            node <X> *p=search(data1);
            if(p)
            {
                node <X> *temp=new node<X>;
                temp->prev=p;
                temp->item=data2;
                temp->next=p->next;
                if(p->next)
                    p->next->prev=temp;
                p->next=temp;
                return true;
            }
            else
                return false;
        }
        bool deleteFirst()
        {
            node <X> *p=start;
            if(p)
            {
                start=p->next;
                if(p->next)
                    p->next->prev=nullptr;
                delete p;
                return true;
            }
            else
                return false;
        }
        bool deleteLast()
        {
            node <X> *p=start;
            if(p)
            {
                while(p->next)
                    p=p->next;
                if(p->prev)
                    p->prev->next=nullptr;
                else
                    start=nullptr;
                delete p;
                return true;
            }
            else
                return false;
        }
        bool deleteNode(X data)
        {
            node <X> *p=search(data);
            if(p)
            {
                if(p==start)
                    deleteFirst();
                else if(!p->next)
                    deleteLast();
                else
                {
                    if(p->prev)
                        p->prev->next=p->next;
                    if(p->next)
                        p->next->prev=p->prev;
                    delete p;
                }
                return true;
            }
            else
                return false;
        }
        ~DLL()
        {
            while(start)
                deleteFirst();
        }
};

int main()
{

    return 0;
}