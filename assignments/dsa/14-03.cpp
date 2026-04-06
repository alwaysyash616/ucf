/*
 Assignment: 14
 Problem: 03
 Topic: Tree
 Description: In question 1, define a method to check if the tree is empty.
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
        bool isEmpty()
        {
            return root ? false : true ;
        }
};
int main()
{

    return 0;
}