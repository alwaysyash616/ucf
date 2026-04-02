/*
 Assignment: 11
 Problem: 02
 Topic: Queue using linked list
 Description: In question 1, define a constructor to initialise member variable.
 Date: 16-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        int item;
        node *next;
};
class Queue
{
    private:
        node *front,*rear;
    public:
        Queue()
        {
            front=rear=nullptr;
        }
};
int main()
{

    return 0;
}