/*
 Assignment: 02
 Problem: 01
 Topic: Template Class
 Description: Define data structure Array using class template 
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
class Array
{
    private:
        int capacity,lastIndex;
        X *ptr;
    public:
        Array(int cap)
        {
            capacity=cap;
            lastIndex=-1;
            ptr=new X[capacity];
        }
        bool isEmpty()
        {
            return lastIndex==-1;
        }
        bool isFull()
        {
            return lastIndex+1==capacity;
        }
        bool append(X data)
        {
            if(isFull())
                return false;
            ptr[++lastIndex]=data;
            return true;
        }
        bool insert(X data,int index)
        {
            int i;
            if(isFull())
                return false;
            else if(index>lastIndex+1 || index<0)
                return false;
            else
            {
                for(i=lastIndex;i>=index;i--)
                    ptr[i+1]=ptr[i];
                ptr[index]=data;
                lastIndex++;
                return true;
            }
        }
        bool set(int index,X data)
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
            if(isEmpty())
                return false;
            else if(index<0 || index>lastIndex)
                return false;
            else
            {
                for(i=index;i<lastIndex;i++)
                    ptr[i]=ptr[i+1];
                lastIndex--;
                return true;
            }
        }
        X get(int index)
        {
            if(index<0 || index>lastIndex)
                throw "Invalid Index";
            return ptr[index];
        }
        int size()
        {
            return lastIndex+1;
        }
        ~Array()
        {
            delete []ptr;
            ptr=nullptr;
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
    // Array <int> a1(10);
    return 0;
}