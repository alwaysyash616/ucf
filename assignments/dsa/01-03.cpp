/*
 Assignment: 01
 Problem: 03
 Topic: Array Data Structure
 Description: In question 1, add a method to check wheather an array is empty or not by returning True or False.
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
};
int main()
{
    Array a1(5);
    cout<<a1.isEmpty();
    cout<<endl;
    return 0;
}