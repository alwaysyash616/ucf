/*
 Assignment: 18
 Problem: 01
 Topic: Graph List Representation
 Description: Define a class Graph to implement linked list representation of graph. Define needful structure for node and class for AdjList.
 Date: 22-02-2026
*/
#include<iostream>
using namespace std;
class node
{
    public:
        int item;
        node *next;
};
class AdjList
{
    private:
        node *start;
    public:
        AdjList()
        {
            start=nullptr;
        }
        void insertAtFirst(int data)
        {
            node *temp=new node;
            temp->item=data;
            temp->next=start;
            start=temp;
        }
        void insertAtLast(int data)
        {
            node *temp=new node;
            temp->item=data;
            temp->next=nullptr;
            if(start)
            {
                node *p=start;
                while(p->next)
                    p=p->next;
                p->next=temp;
            }
            else
            {
                start=temp;
            }
        }
        node* search(int data)
        {
            node *p=start;
            while(p)
            {
                if(p->item==data)
                    break;
                p=p->next;
            }
            return p;
        }
        void insertAfterValue(int value,int data)
        {
            node *p=search(value);
            if(p)
            {
                node *temp=new node;
                temp->item=data;
                temp->next=p->next;
                p->next=temp;
            }
        }
        void deleteFirst()
        {
            if(start)
            {
                node *p=start;
                start=start->next;
                delete p;
            }
        }
        void deleteLast()
        {
            if(start && start->next)
            {
                node *p=start;
                while(p->next->next)
                {
                    p=p->next;
                }
                delete p->next;
                p->next=nullptr;
            }
            else if(start)
            {
                delete start;
                start=nullptr;
            }
        }
        void deleteNode(int value)
        {
            if(start && start->next)
            {
                if(start->item==value)
                    deleteFirst();
                else
                {
                    node *p=start;
                    while(p->next)
                    {
                        if(p->next->item==value)
                            break;
                        p=p->next;
                    }
                    if(p->next)
                    {
                        node *temp=p->next;
                        p->next=temp->next;
                        delete temp;
                    }
                }
            }
            else if(start)
            {
                if(start->item==value)
                    deleteFirst();
            }
        }
        ~AdjList()
        {
            while(start)
            {
                deleteFirst();
            }
        }
};
class Graph
{
    private:
        int v_count;
        AdjList *arr;
};
int main()
{

    return 0;
}