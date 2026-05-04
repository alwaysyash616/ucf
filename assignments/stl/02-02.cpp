/*
 Assignment: 02
 Problem: 02
 Topic: Template Class
 Description: Define data structure Dynamic Array using class template 
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
class DynArray
{
    private:
        int capacity,lastIndex;
        X *ptr;
    public:
        DynArray(int cap)
        {
            capacity=cap;
            lastIndex=-1;
            ptr=new X[capacity];
        }
        void doubleArray()
        {
            int i;
            X *temp=new X[capacity*2];
            for(i=0;i<=lastIndex;i++)
                temp[i]=ptr[i];
            delete []ptr;
            ptr=temp;
            capacity*=2;
        }
        void halfArray()
        {
            int i;
            X *temp=new X[capacity/2];
            for(i=0;i<=lastIndex;i++)
                temp[i]=ptr[i];
            delete []ptr;
            ptr=temp;
            capacity/=2;
        }
        int getCapacity()
        {
            return capacity;
        }
        bool isEmpty()
        {
            return lastIndex==-1;
        }
        void append(X data)
        {
            if(lastIndex+1==capacity)
                doubleArray();
            ptr[lastIndex+1]=data;
            lastIndex++;
        }
        bool insert(X data,int index)
        {
            int i;
            if(index<0 || index>lastIndex+1)
                return false;
            else
            {
                if(lastIndex+1==capacity)
                    doubleArray();
                for(i=lastIndex;i>=index;i++)
                    ptr[i+1]=ptr[i];
                ptr[index]=data;
                lastIndex++;
                return true;
            }
        }
        bool set(X data,int index)
        {
            if(index<0 || index>lastIndex)
                return false;
            else
            {
                ptr[index]=data;
                return true;
            }
        }
        bool deleteAt(int index)
        {
            int i;
            if(index<0 || index>lastIndex)
                return false;
            else
            {
                for(i=index;i<lastIndex;i++)
                    ptr[i]=ptr[i+1];
                lastIndex--;
                if(capacity>1 && lastIndex<capacity/2)
                    halfArray();
                return true;
            }
        }
        bool isFull()
        {
            return lastIndex+1==capacity;
        }
        X getElement(int index)
        {
            if(index<0 || index>lastIndex)
                throw "Invalid Index";
            else
            {
                return ptr[index];
            }
        }
        int getSize()
        {
            return lastIndex+1;
        }
        ~DynArray()
        {
            delete []ptr;
            ptr=nullptr;
            lastIndex=-1;
            capacity=0;
        }
        int search(X data)
        {
            int i;
            for(i=0;i<=lastIndex;i++)
                if(ptr[i]==data)
                    return i;
            return -1;
        }
};
int main()
{

    return 0;
}