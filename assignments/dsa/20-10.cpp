/*
 Assignment: 20
 Problem: 09
 Topic: Heap
 Description: Define a method to sort elements of an array using heap sort.
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
                            if(arr[2*i+1]>=arr[size-1])
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
                            if(arr[2*i+2]>=arr[size-1])
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
        Heap& operator =(Heap &H)
        {
            if(this==&H)
                return *this;
            capacity=H.capacity;
            size=H.size;
            delete []arr;
            arr=new int[capacity];
            for(int i=0;i<size;i++)
                arr[i]=H.arr[i];
            return *this;
        }
        void sort()
        {
            int temp;
            while(true)
            {
                temp=arr[0];
                if(del())
                    arr[size]=temp;
                else
                    break;
            }
        }
        void print()
        {
            for(int i=0;i<capacity;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
};
int main()
{
    int a[9]={10,20,5,6,1,8,9,4};
    Heap h1(10);
    for(int i=0;i<8;i++)
        h1.insert(a[i]);
    h1.print();
    h1.sort();
    h1.print();
    cout<<endl;
    return 0;
}