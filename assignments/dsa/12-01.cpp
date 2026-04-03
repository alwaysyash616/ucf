/*
 Assignment: 12
 Problem: 01
 Topic: Deque
 Description: Define a class Deque with node type pointers front and rear as member variables. Implement queue using doubly linked list.
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
};
int main()
{

    return 0;
}