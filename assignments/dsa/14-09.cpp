/*
 Assignment: 14
 Problem: 09
 Topic: Tree
 Description: In question 1, define a method to search an item in the BST
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
        void deleteNode(int data)
        {
            node *p=root,*q=root,*temp=nullptr;
            while(true)
            {
                if(!q)
                    return;
                if(q->item==data)
                    break;
                else if(q->item>data)
                {
                    p=q;
                    q=q->left;
                }
                else
                {
                    p=q;
                    q=q->right;
                }
            }
            if(!(q->left) && !(q->right))
            {
                delete q;
                if(q==root)
                {
                    root=nullptr;
                    return;
                }
                if(p->left==q)
                    p->left=nullptr;
                else
                    p->right=nullptr;
            }
            else if(q->left && q->right)
            {
                p=q;
                q=q->left;
                if(q->right)
                {
                    while(q->right->right)
                        q=q->right;
                    p->item=q->right->item;
                }
                else
                {
                    p->item=q->item;
                    delete q;
                    p->left=nullptr;
                    return;
                }
                if(q->right->left)
                {
                    temp=q->right->left;
                    delete q->right;
                    q->right=temp;
                }
                else
                {
                    delete q->right;
                    q->right=nullptr;
                }
            }
            else if(q->left)
            {
                temp=q->left;
                delete q;
                if(q==root)
                {
                    root=temp;
                    return;
                }
                if(p->left==q)
                    p->left=temp;
                else
                    p->right=temp;
            }
            else
            {
                temp=q->right;
                delete q;
                if(q==root)
                {
                    root=temp;
                    return;
                }
                if(p->left==q)
                    p->left=temp;
                else
                    p->right=temp;
            }
        }
        node* search(int data)
        {
            node *p=root;
            while(p)
            {
                if(p->item==data)
                    break;
                else if(p->item>data)
                    p=p->left;
                else
                    p=p->right;
            }
            return p;
        }
};
int main()
{

    return 0;
}


// First implementation of BST deletion (complex but working may be)
// I will refactor later for simplicity