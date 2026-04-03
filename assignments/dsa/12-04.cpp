/*
 Assignment: 12
 Problem: 04
 Topic: Deque
 Description: In question 1, define a method to insert a new element at the rear.
 Date: 17-02-2026
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
class Deque
{
    private:
        node *front,*rear;
    public:
        Deque()
        {
            front=rear=nullptr;
        }
        void insertAtFront(int data)
        {
            node *temp=new node;
            temp->prev=nullptr;
            temp->item=data;
            if(front)
            {
                temp->next=front;
                front->prev=temp;
                front=temp;
            }
            else
            {
                temp->next=nullptr;
                front=rear=temp;
            }
        }
        void insertAtRear(int data)
        {
            node *temp=new node;
            temp->item=data;
            temp->next=nullptr;
            if(rear)
            {
                temp->prev=rear;
                rear->next=temp;
                rear=temp;
            }
            else
            {
                temp->prev=nullptr;
                front=rear=temp;
            }
        }
};
int main()
{

    return 0;
}