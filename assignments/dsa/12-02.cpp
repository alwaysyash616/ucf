/*
 Assignment: 12
 Problem: 02
 Topic: Deque
 Description: In question 1, define a constructor to initialise member variables
 Date: 17-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        node *prev;
        int item;
        node *next;
};
class Deque
{
    private:
        node *front,*rear;
    public:
        Deque()
        {
            front=rear=nullptr;
        }
};
int main()
{

    return 0;
}