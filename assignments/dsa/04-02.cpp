/*
 Assignment: 04
 Problem: 02
 Topic: Singly Linked List
 Description: In question 1, define a constructor to initialise start pointer with NULL.
 Date: 11-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        int item;
        node *next;
};
class SLL
{
    private:
        node *start;
    public:
        SLL()
        {
            start=nullptr;
        }
};
int main()
{

    return 0;
}