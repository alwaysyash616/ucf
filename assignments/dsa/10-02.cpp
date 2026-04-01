/*
 Assignment: 10
 Problem: 02
 Topic: Queue using arrays
 Description: In question 1, define a parameterized constructor to initialise member variables.
 Date: 16-02-2026
*/
#include<iostream>
using namespace std;
class Queue
{
    private:
        int capacity,front,rear,*ptr;
    public:
        Queue(int c)
        {
            capacity=c<=0?1:c;
            front=rear=-1;
            ptr=new int[capacity];
        }
};
int main()
{

    return 0;
}