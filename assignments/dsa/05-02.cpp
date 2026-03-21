/*
 Assignment: 05
 Problem: 02
 Topic: Doubly Linked List
 Description: In question 1, define a constructor to initialise start pointer with NULL.
 Date: 12-02-2026
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
class DLL
{
    private:
        node *start;
    public:
        DLL()        
        {
            start=nullptr;
        }
};
int main()
{
    
    return 0;
}