/*
 Assignment: 20
 Problem: 05
 Topic: Heap
 Description: In question-1, define a method max() to return greatest value in the heap.
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
};
int main()
{

    return 0;
}