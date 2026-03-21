/*
 Assignment: 06
 Problem: 07
 Topic: Circular Linked List
 Description: In question 1, define a method to delete first node from the list.
 Date: 13-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        int item;
        node *next;
};
class CLL
{
    private:
        node *last;
    public:
        CLL()
        {
            last=nullptr;
        }
        void insertAtFirst(int data)
        {
            node *temp=new node;
            temp->item=data;
            if(last)
                temp->next=last->next;
            else
                last=temp;
            last->next=temp;
        }
        void insertAtLast(int data)
        {
            node *temp=new node;
            temp->item=data;
            if(last)
                temp->next=last->next;
            else
                last=temp;
            last->next=temp;            
            last=temp;
        }
        // Inserting at the beginning means inserting after last but not moving last.
        node* search(int data)
        {
            if(last)
            {
                node *p=last;
                do
                {
                    if(p->item==data)
                        return p;
                    p=p->next;
                } while (p!=last);
            }
            return nullptr;
        }
        void insertAfter(int data1,int data2)
        {
            node *p=search(data1);
            if(p)
            {
                node *temp=new node;
                temp->item=data2;
                temp->next=p->next;
                p->next=temp;
                if(p==last)
                    last=last->next;
            }
        }
        void deleteFirst()
        {
            if(last)
            {
                node *p=last->next;
                last->next=last->next->next;
                delete p;
                if(p==last)
                    last=nullptr;
            }
        }
};
int main()
{
    
    return 0;
}