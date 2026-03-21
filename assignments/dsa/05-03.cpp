/*
 Assignment: 05
 Problem: 03
 Topic: Doubly Linked List
 Description: In question 1, define a method to insert a data into the list at the beginning.
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
};
int main()
{
    
    return 0;
}