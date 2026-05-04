/*
 Assignment: 20
 Problem: 08
 Topic: Heap
 Description: In question-1, define a copy constructor to perform deep copy.
 Date: 26-02-2026
*/
#include<iostream>
using namespace std;
class Heap
{
    private:
        int capacity,size,*arr;
    public:
        Heap(int cap)
        {
            capacity=cap;
            size=0;
            arr=new int[capacity];
        }
        void grow()
        {
            int *temp=new int[capacity*2];
            for(int i=0;i<size;i++)
                temp[i]=arr[i];
            delete []arr;
            arr=temp;
            capacity*=2;
        }
        void insert(int data)
        {
            int i;
            if(size==capacity)
                grow();
            i=size;
            while(i && arr[(i-1)/2]<data)            
            {
                arr[i]=arr[(i-1)/2];
                i=(i-1)/2;                
            }
            arr[i]=data;
            size++;
        }
        bool isEmpty()
        {
            return size==0;
        }
        int max()
        {
            if(size==0)
                throw "Heap is Empty";
            else
                return arr[0];
        }
        bool del()
        {
            int i=0;
            if(size==0)
                return false;
            else
            {
                while(true)
                {
                    if(2*i+2<size)
                    {
                        if(arr[2*i+1]>arr[2*i+2])
                            if(arr[2*i+1]>arr[size-1])
                            {
                                arr[i]=arr[2*i+1];
                                i=2*i+1;
                            }
                            else
                            {
                                arr[i]=arr[size-1];
                                size--;
                                return true;
                            }
                        else
                        {
                            if(arr[2*i+2]>arr[size-1])
                            {
                                arr[i]=arr[2*i+2];
                                i=2*i+2;
                            }
                            else
                            {
                                arr[i]=arr[size-1];
                                size--;
                                return true;
                            }
                        }
                    }
                    else if(2*i+1<size)
                    {
                        arr[i]=arr[size-1]; // or arr[i]=arr[2*i+1];
                        size--;
                        return true;
                    }
                    else
                    {
                        arr[i]=arr[size-1];
                        size--;
                        return true;
                    }
                }
            }
        }
        ~Heap()
        {
            delete []arr;
        }
        Heap(Heap &H)
        {
            capacity=H.capacity;
            size=H.size;
            arr=new int[capacity];
            for(int i=0;i<size;i++)
                arr[i]=H.arr[i];
        }
};
int main()
{

    return 0;
}