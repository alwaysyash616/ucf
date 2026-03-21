/*
 Assignment: 03
 Problem: 04
 Topic: Dynamic Arrays
 Description: In question 1, define a method halfArray() to decrease the size of the array by half of it's size.
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
};
int main()
{

    return 0;
}