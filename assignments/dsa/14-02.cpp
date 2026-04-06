/*
 Assignment: 14
 Problem: 02
 Topic: Tree
 Description: In question 1, define a constructor to initialise root pointer with NULL.
 Date: 20-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        node *left;
        int item;
        node *right;
};
class BST
{
    private:
        node *root;
    public:
        BST()
        {
            root=nullptr;
        }
};
int main()
{

    return 0;
}