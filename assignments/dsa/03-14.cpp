/*
 Assignment: 03
 Problem: 14
 Topic: Dynamic Arrays
 Description: In question 1, define a destructor to deallocate the memory of the array.
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
        void insert(int data,int index)
        {
            int i;
            if(lastIndex+1==capacity)
                doubleArray();
            if(index<0 || index>lastIndex)
                append(data);
            else
            {
                for(i=lastIndex;i>=index;i--)
                    ptr[i+1]=ptr[i];
                ptr[index]=data;
                lastIndex++;
            }
        }
        void editElement(int data,int index)
        {
            if(index>=0 && index<=lastIndex)
            {
                ptr[index]=data;
            }
        }
        void deleteElement(int index)
        {
            int i;
            if(index>=0 && index<=lastIndex)
            {
                for(i=index;i<lastIndex;i++)
                {
                    ptr[i]=ptr[i+1];
                }
                lastIndex--;
            }
            if(lastIndex<capacity/2)
                halfArray();
        }
        bool isFull()
        {
            if(lastIndex+1==capacity)
                return true;
            else
                return false;
        }
        int getElement(int index)
        {
            if(index>=0 && index<=lastIndex)
            {
                return ptr[index];
            }
        }
        int countElements()
        {
            return lastIndex+1;
        }
        ~DynArray()
        {
            delete []ptr;
        }
};
int main()
{

    return 0;
}