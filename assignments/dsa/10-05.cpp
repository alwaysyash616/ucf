/*
 Assignment: 10
 Problem: 05
 Topic: Queue using arrays
 Description: In question 1, define a method to view front element of the queue.
 Date: 16-02-2026
*/
#include<iostream>
using namespace std;
class Queue
{
    private:
        int capacity,front,rear,*ptr;
    public:
        Queue(int c)
        {
            capacity=c<=0?1:c;
            front=rear=-1;
            ptr=new int[capacity];
        }
        void enque(int data)
        {
            if((rear+1)%capacity==front)
            {
                cout<<"Overflow"<<endl;
                return;
            }
            if(front==-1)
                front=0;
            rear=(rear+1)%capacity;
            ptr[rear]=data;
        }
        // View rear element
        int getBack()
        {
            if(front==-1)
                throw "Queue Underflow";
            return ptr[rear];
        }
        // View front element
        int getFront()
        {
            if(front==-1)
                throw "Queue Underflow";
            return ptr[front];
        }
};
int main()
{

    return 0;
}