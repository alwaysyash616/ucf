/*
 Assignment: 11
 Problem: 08
 Topic: Queue using linked list
 Description: In question 1, define a method to count number of elements present in the queue.
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
        void deque()
        {
            if(front)   // Althought it's less readable then front==nullptr. I am using it because IT CAN ALSO BE DONE THIS WAY. And uses less checking. Later on I will use the standard way (flow).
            {
                node *temp=front;
                if(front==rear)
                    front=rear=nullptr;
                else
                    front=temp->next;
                delete temp;
            }
            else
                throw "Queue Underflow";
        }
        ~Queue()
        {
            while(front)
                deque();
        }
        int count()
        {
            int size=0;
            node *temp=front;
            while(temp)
            {
                size++;
                temp=temp->next;
            }
            return size;
        }
};
int main()
{

    return 0;
}