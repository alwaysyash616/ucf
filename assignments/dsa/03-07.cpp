/*
 Assignment: 03
 Problem: 07
 Topic: Dynamic Arrays
 Description: In question 1, define a method to append a new element in the array
 Date: 10-02-2026
*/
#include<iostream>
using namespace std;
class DynArray
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        DynArray(int size)
        {
            capacity=size;
            lastIndex=-1;
            ptr=new int[capacity];
        }
        void doubleArray()
        {
            int i,*temp;
            temp=new int[capacity*2];
            for(i=0;i<=lastIndex;i++)
                temp[i]=ptr[i];
            delete []ptr;
            ptr=temp;
            capacity*=2;
        }
        void halfArray()
        {
            int i,*temp;
            temp=new int[capacity/2];
            for(i=0;i<=lastIndex;i++)
                temp[i]=ptr[i];
            delete []ptr;
            ptr=temp;
            capacity/=2;
        }
        int currentCapacity()
        {
            return capacity;
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
            if(lastIndex+1==capacity)
                doubleArray();
            ptr[lastIndex+1]=data;
            lastIndex++;
        }
};
int main()
{

    return 0;
}