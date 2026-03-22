/*
 Assignment: 07
 Problem: 02
 Topic: Circular Doubly Linked List
 Description: In question 1, define a constructor to initialise start pointer with NULL.
 Date: 14-02-2026
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
class CDLL
{
    private:
        node *start;
    public:
        CDLL()
        {
            start=nullptr;
        }
};
int main()
{
    
    return 0;
}