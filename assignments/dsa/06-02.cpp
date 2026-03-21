/*
 Assignment: 06
 Problem: 02
 Topic: Circular Linked List
 Description: In question 1, define a constructor to initialise last pointer with NULL.
 Date: 13-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        int item;
        node *next;
};
class CLL
{
    private:
        node *last;
    public:
        CLL()
        {
            last==nullptr;
        }
};
int main()
{
    
    return 0;
}