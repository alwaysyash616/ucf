/*
 Assignment: 06
 Problem: 03
 Topic: Circular Linked List
 Description: In question 1, define a method to insert a data into the list at the beginning.
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
};
int main()
{
    
    return 0;
}