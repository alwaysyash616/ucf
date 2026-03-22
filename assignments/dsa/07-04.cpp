/*
 Assignment: 07
 Problem: 04
 Topic: Circular Doubly Linked List
 Description: In question 1, define a method to insert a data into the list at the end
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
};
int main()
{
    
    return 0;
}