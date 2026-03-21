/*
 Assignment: 01
 Problem: 02
 Topic: Array Data Structure
 Description: In question 1, define a parameterised constructor to create an array of specified size.
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
};
int main()
{

    return 0;
}