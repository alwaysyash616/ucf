/*
 Assignment: 01
 Problem: 10
 Topic: Array Data Structure
 Description: In question 1, define a method to count number of elements present in the array. 
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

        void append(int data) // We can return true for each successfull append and false for unsuccessful append attempt.
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
        
        void insert(int data,int index)
        {
            int i;
            if(!isFull())
            {
                if(isEmpty()) 
                {
                    lastIndex=0;
                    p[lastIndex]=data;
                }
                else if(index>lastIndex)
                    append(data);
                else
                {
                    for(i=lastIndex;i>=index;i--)
                        p[i+1]=p[i];
                    lastIndex++;
                    p[index]=data;
                }
            }
            else
            {
                cout<<"Array is Full"<<endl;
            }
        }

        void editElement(int data,int index)
        {
            if(isEmpty())
            {
                lastIndex=0;
                p[lastIndex]=data;
            }
            else
            {
                if(index<0 || index>lastIndex)
                    cout<<"Invalid Operation"<<endl;
                else // if(index<=lastIndex && index>=0)
                    p[index]=data;
            }
        }

        void deleteElement(int index)
        {
            int i;
            if(!isEmpty())
            {
                if(index>=0 && index<=lastIndex)
                {
                    for(i=index;i<lastIndex;i++)
                        p[i]=p[i+1];
                    lastIndex--;
                }
                else
                {
                    cout<<"Invalid Index"<<endl;
                }
            }
            else
            {
                cout<<"Array is already Empty"<<endl;
            }
        }
        bool isFull()
        {
            if(lastIndex==capacity-1)
                return true;
            else
                return false;
        }

        bool getElement(int index,int &data)
        {
            if(!isEmpty())
            {
                if(index>=0 && index<=lastIndex)
                {
                    data=p[index];
                    return true;
                }
                else
                {
                    cout<<"Invalid Index"<<endl;
                    return false;
                }
            }
            else
            {
                cout<<"Array is Empty"<<endl;
                return false;
            }
        }
        int countElements()
        {
            if(!isEmpty())
                return lastIndex+1;
            return 0;
        }
        // void printArray()
        // {
        //     int i;
        //     for(i=0;i<=lastIndex;i++)
        //     {
        //         cout<<i+1<<" "<<p[i]<<endl;
        //     }
        // }
};
int main()
{
    int value;
    Array a1(5);
    // cout<<a1.isEmpty()<<endl;
    a1.append(5);
    // cout<<a1.isEmpty()<<endl;
    a1.append(4);
    a1.append(6);
    
    a1.insert(100,0);
    // a1.printArray();
    a1.editElement(500,2);
    // a1.printArray();

    a1.deleteElement(2);
    // cout<<"After deletion"<<endl;
    // a1.printArray();
    a1.getElement(1,value);
    // cout<<value;
    cout<<a1.countElements();
    
    cout<<endl;
    return 0;
}

// Irrespective of specified index, we'll append at index 0, when the Array is empty. Because no gap should be between user's data. Reason: We can't differentiate between garbage and actual value.