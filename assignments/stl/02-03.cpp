/*
 Assignment: 02
 Problem: 03
 Topic: Template Class
 Description: Define data structure Linked List using class template
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
class node
{
    public:
        X item;
        node <X> *next;
};
template <typename X>
class SLL
{
    private:
        node <X> *start;
    public:
        SLL()
        {
            start=nullptr;
        }
        void insertAtFirst(X data)
        {
            node <X> *temp=new node<X>;
            temp->item=data;
            temp->next=start;
            start=temp;
        }
        void insertAtLast(X data)
        {
            node <X> *p=start;
            node <X> *temp=new node<X>;
            temp->item=data;
            temp->next=nullptr;
            if(p)
            {   while(p->next)
                    p=p->next;
                p->next=temp;
            }
            else
                start=temp;
        }
        node<X>* search(X data)
        {
            node <X> *p=start;
            while(p)
            {
                if(p->item==data)
                    return p;
                p=p->next;
            }
            return nullptr;
        }
        bool insertAfter(X data1,X data2)
        {
            node <X> *p=search(data1);
            if(p)
            {
                node <X> *temp=new node<X>;
                temp->item=data2;
                temp->next=p->next;
                p->next=temp;
                return true;
            }
            return false;
        }
        bool deleteFirst()
        {
            node <X> *temp=start;
            if(temp)
            {
                start=start->next;
                delete temp;
                return true;
            }
            return false;
        }
        bool deleteLast()
        {
            node <X> *p=start;
            if(p && p->next)
            {
                while(p->next->next)
                    p=p->next;
                delete p->next;
                p->next=nullptr;
                return true;
            }
            else if(p)
            {
                delete p;
                start=nullptr;
                return true;
            }
            return false;
        }
        bool deleteNode(X data)
        {
            node <X> *t=start;
            node <X> *p=search(data);
            if(p)
            {
                if(p==start)
                    deleteFirst();
                else if(!p->next)
                    deleteLast();
                else
                {
                    while(t->next!=p)
                        t=t->next;
                    t->next=p->next;
                    delete p;
                }
                return true;
            }
            else
                return false;
        }
        ~SLL()
        {
            while(start)
                deleteFirst();
        }
};
int main()
{

    return 0;
}