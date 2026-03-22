/*
 Assignment: 09
 Problem: 02
 Topic: Stack using linked list
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
class Stack
{
    private:
        node *top;
    public:
        Stack()
        {
            top=nullptr;
        }
};
int main()
{

    return 0;
}