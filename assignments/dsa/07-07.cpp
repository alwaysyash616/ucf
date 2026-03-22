/*
 Assignment: 07
 Problem: 07
 Topic: Circular Doubly Linked List
 Description: In question 1, define a method to delete first node from the list.
 Date: 14-02-2026
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
class CDLL
{
    private:
        node *start;
    public:
        CDLL()
        {
            start=nullptr;
        }
        void insertAtFirst(int data)
        {
            node *temp=new node;
            temp->item=data;
            if(start)            
            {
                temp->prev=start->prev;
                temp->next=start;
                start->prev->next=temp;
                start->prev=temp;
            }
            else
            {
                temp->prev=temp;
                temp->next=temp;
            }
            start=temp;
        }
        void insertAtLast(int data)
        {
            node *temp=new node;
            temp->item=data;
            if(start)
            {
                temp->prev=start->prev;
                temp->next=start;
                start->prev->next=temp;
                start->prev=temp;
            }
            else
            {
                temp->prev=temp;
                temp->next=temp;
                start=temp;
            }
        }
        node* search(int data)
        {
            if(start)
            {
                node *p=start;
                do
                {
                    if(p->item==data)
                        return p;
                    p=p->next;
                } while (p!=start);
                
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
                p->next->prev=temp;
                p->next=temp;
            }
        }
        void deleteFirst()
        {
            if(start)
            {
                node *p=start;
                p->next->prev=p->prev;
                p->prev->next=p->next;
                if(p!=p->next)
                    start=p->next;
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