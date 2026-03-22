/*
 Assignment: 08
 Problem: 09
 Topic: Stack using Arrays
 Description: Define a method to reverse a stack.
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
        ~Stack()
        {
            delete []ptr;
            ptr=nullptr;
            top=-1;
            capacity=0;
        }
        bool overflow()
        {
            if(top==capacity-1)
                return true;
            else
                return false;
        }
        bool underflow()
        {
            if(top==-1)
                return true;
            else
                return false;
        }
        void reverse()
        {
            int i;
            if(!underflow())
                for(i=0;i<(top+1)/2;i++)
                    ptr[top-i]=(ptr[i]+ptr[top-i])-(ptr[i]=ptr[top-i]);
        }
};
int main()
{   

    return 0;
}