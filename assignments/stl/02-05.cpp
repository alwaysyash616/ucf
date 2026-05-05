/*
 Assignment: 02
 Problem: 05
 Topic: Template Class
 Description: Define data structure Stack using class template
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
class Stack
{
    private:
        int capacity,top;
        X *ptr;
    public:
        Stack(int cap)
        {
            capacity=cap;
            top=-1;
            ptr=new X[capacity];
        }
        bool push(X data)
        {
            if(top==capacity-1)
                return false;
            else
            {
                ptr[++top]=data;
                return true;
            }
        }
        X peek()
        {
            if(top==-1)
                throw "Underflow";
            else
                return ptr[top];
        }
        X pop()
        {
            if(top==-1)
                throw "Underflow";
            else
                return ptr[top--];
        }
        ~Stack()
        {
            delete []ptr;
            ptr=nullptr;
            top=-1;
            capacity=0;
        }
        bool isEmpty()
        {
            return top==-1;
        }
        bool isFull()
        {
            return top==capacity-1;
        }
        void reverse()
        {
            int i;
            X temp;
            for(i=0;i<(top+1)/2;i++)
            {
                temp=ptr[i];
                ptr[i]=ptr[top-i];
                ptr[top-i]=temp;
            }
        }
        X getMin()
        {
            
        }
};
int main()
{

    return 0;
}