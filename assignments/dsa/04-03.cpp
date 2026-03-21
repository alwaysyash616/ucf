/*
 Assignment: 04
 Problem: 03
 Topic: Singly Linked List
 Description: In question 1, define a method to insert a data into the list at the beginning.
 Date: 11-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        int item;
        node *next;
};
class SLL
{
    private:
        node *start;
    public:
        SLL()
        {
            start=nullptr;
        }
        void insertAtFirst(int data)
        {
            node *temp=new node;
            temp->item=data;
            temp->next=start;
            start=temp;
        }
};
int main()
{

    return 0;
}