/*
 Assignment: 06
 Problem: 04
 Topic: Circular Linked List
 Description: In question 1, define a method to insert a data into the list at the end
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
        
};
int main()
{
    
    return 0;
}