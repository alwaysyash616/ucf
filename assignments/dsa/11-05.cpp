/*
 Assignment: 11
 Problem: 05
 Topic: Queue using linked list
 Description: In question 1, define a method to view front element in the queue.
 Date: 16-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        int item;
        node *next;
};
class Queue
{
    private:
        node *front,*rear;
    public:
        Queue()
        {
            front=rear=nullptr;
        }
        void enque(int data)
        {
            node *temp=new node;
            temp->item=data;
            temp->next=nullptr;
            if(rear==nullptr)   // We can check front==nullptr instead.
                front=rear=temp;
            else
            {
                rear->next=temp;
                rear=temp;
            }
        }
        int getBack()
        {
            if(rear)
                return rear->item;
            throw "Queue Underflow";
        }
        int getFront()
        {
            if(front==nullptr)
                throw "Queue Underflow";
            return front->item;
        }
};
int main()
{

    return 0;
}