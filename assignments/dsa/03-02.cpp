/*
 Assignment: 03
 Problem: 02
 Topic: Dynamic Arrays
 Description: In question 1, define a parameterised constructor to create an array of specified size.
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
};
int main()
{

    return 0;
}