/*
 Assignment: 14
 Problem: 07
 Topic: Tree
 Description: In question 1, define a method for postorder traversing of BST
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
        void insert(int data)
        {
            node *p=root;
            node *temp=new node;
            temp->left=nullptr;
            temp->item=data;
            temp->right=nullptr;
            if(root)
            {
                while(1)
                {
                    if(p->item==data)
                    {
                        delete temp;
                        throw "DUPLICATE_VALUE";
                    }
                    else if(p->item>data)
                    {
                        if(p->left)
                            p=p->left;
                        else
                        {
                            p->left=temp;
                            break;
                        }
                    }
                    else
                    {
                        if(p->right)
                            p=p->right;
                        else
                        {
                            p->right=temp;
                            break;
                        }
                    }
                }
            }
            else
                root=temp;
        }
        void preorder()
        {
            preOrder(root);
        }
        void preOrder(node *p)
        {
            if(p)
            {
                cout<<p->item<<" ";
                preOrder(p->left);
                preOrder(p->right);
            }
        }
        void inorder()
        {
            inOrder(root);
        }
        void inOrder(node *p)
        {
            if(p)
            {
                inOrder(p->left);
                cout<<p->item<<" ";
                inOrder(p->right);
            }
        }
        void postorder()
        {
            postOrder(root);
        }
        void postOrder(node *p)
        {
            if(p)
            {
                postOrder(p->left);
                postOrder(p->right);
                cout<<p->item<<" ";
            }
        }
};
int main()
{

    return 0;
}