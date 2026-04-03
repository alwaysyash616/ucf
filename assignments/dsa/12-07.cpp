/*
 Assignment: 12
 Problem: 07
 Topic: Deque
 Description: In question 1, define a method to get front element
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
        void deleteFront()
        {
            if(front)
            {
                node *temp=front;
                if(front==rear)
                    front=rear=nullptr;
                else
                {
                    front->next->prev=nullptr;
                    front=front->next;
                }
                delete temp;
            }
        }
        void deleteRear()
        {
            if(rear)
            {
                node *temp=rear;
                if(front==rear)
                    front=rear=nullptr;
                else
                {
                    rear->prev->next=nullptr;
                    rear=rear->prev;
                }
                delete temp;
            }
        }
        int getFront()
        {
            if(front)
                return front->item;
            throw "Deque Underflow";
        }
};
int main()
{

    return 0;
}