/*
 Assignment: 08
 Problem: 03
 Topic: Stack using Arrays
 Description: In question 1, define a method to push a new element on to the Stack.
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
};
int main()
{   

    return 0;
}