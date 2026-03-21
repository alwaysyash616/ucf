/*
 Assignment: 06
 Problem: 05
 Topic: Circular Linked List
 Description: In question 1, define a method to search a node with the given item.
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
            last=nullptr;
        }
        void insertAtFirst(int data)
        {
            node *temp=new node;
            temp->item=data;
            if(last)
                temp->next=last->next;
            else
                last=temp;
            last->next=temp;
        }
        void insertAtLast(int data)
        {
            node *temp=new node;
            temp->item=data;
            if(last)
                temp->next=last->next;
            else
                last=temp;
            last->next=temp;            
            last=temp;
        }
        // Inserting at the beginning means inserting after last but not moving last.
        node* search(int data)
        {
            if(last)
            {
                node *p=last;
                do
                {
                    if(p->item==data)
                        return p;
                    p=p->next;
                } while (p!=last);
            }
            return nullptr;
        }
};
int main()
{
    
    return 0;
}