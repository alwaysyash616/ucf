/*
 Assignment: 04
 Problem: 08
 Topic: Singly Linked List
 Description: In question 1, define a method to delete last node of the list.
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
};
int main()
{
    // SLL l1;
    // l1.insertAtLast(50);
    // l1.insertAtFirst(20);
    // l1.insertAtFirst(55);
    // l1.insertAtLast(45);

    // node *p=l1.search(50);
    // if(p)
    //     cout<<p->item<<" Found"<<endl;
    // else
    //     cout<<"Not Found"<<endl;
    cout<<endl;
    return 0;
}