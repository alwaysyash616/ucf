/*
 Assignment: 08
 Problem: 02
 Topic: Stack using Arrays
 Description: In question 1, define a parameterised constructor to initialise member variables.
 Date: 16-02-2026
*/
#include<iostream>
using namespace std;
class Stack
{
    private:
        int capacity,top,*ptr;
    public:
        Stack(int size)
        {
            capacity=size;
            top=-1;
            ptr=new int[capacity];
        }
};
int main()
{   

    return 0;
}