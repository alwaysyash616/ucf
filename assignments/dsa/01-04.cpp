/*
 Assignment: 01
 Problem: 04
 Topic: Array Data Structure
 Description: In question 1, define a method to append a new element in the array
 Date: 09-02-2026
*/
#include<iostream>
using namespace std;
class Array
{
    private:
        int capacity;
        int lastIndex;
        int *p;
    protected:
        bool isFull()
        {
            if(lastIndex==capacity-1)
                return true;
            else
                return false;
        }
    public:
        Array(int s)
        {
            capacity=s;
            lastIndex=-1;
            p=new int[capacity];
        }
        bool isEmpty()
        {
            if(lastIndex==-1)
                return true;
            else
                return false;
        }

        void append(int data)
        {
            if(!isFull())
            {
                if(isEmpty())
                {
                    lastIndex=0;
                    p[lastIndex]=data;
                }
                else
                {
                    lastIndex++;
                    p[lastIndex]=data;
                }
            }
            else
            {
                cout<<"Array is Full"<<endl;
            }
        }
};
int main()
{
    Array a1(5);
    cout<<a1.isEmpty()<<endl;
    a1.append(5);
    cout<<a1.isEmpty()<<endl;
    a1.append(4);
    a1.append(6);
    a1.append(9);
    a1.append(8);

    a1.append(100);
    cout<<endl;
    return 0;
}