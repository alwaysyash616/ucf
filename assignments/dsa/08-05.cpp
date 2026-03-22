/*
 Assignment: 08
 Problem: 05
 Topic: Stack using Arrays
 Description: In question 1, define a method to pop the top element of the stack.
 Date: 16-02-2026
*/
#include<iostream>
using namespace std;
class Stack
{
    private:
        int capacity,top,*ptr;
    public:
        Stack(int size)
        {
            capacity=size;
            top=-1;
            ptr=new int[capacity];
        }
        void push(int data)
        {
            if(top<capacity-1)
            {
                top++;
                ptr[top]=data;
            }
            else
            {
                cout<<"Overflow"<<endl;
            }
        }
        int peek()
        {
            if(top==-1)
            {
                cout<<"Underflow"<<endl;
                return -1;
            }
            else
            {
                return ptr[top];
            }
        }
        int pop()
        {
            if(top!=-1)
            {
                top--;
                return ptr[top+1];
            }
            else
            {
                cout<<"Underflow"<<endl;
                return -1;
            }
        }
};
int main()
{   

    return 0;
}