/*
 Assignment: 18
 Problem: 05
 Topic: Graph List Representation
 Description: Define a method addEdge() in Graph class to add new node in adjacency list.
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
    public:
        Graph(int v)
        {
            v_count=v;
            arr=new AdjList[v_count];
        }
        void createGraph()
        {
            int e_count,i,u,v;
            cout<<"Enter number of edges: ";
            cin>>e_count;
            cout<<"Provide Edges"<<endl;
            for(i=0;i<e_count;)
            {
                cin>>u>>v;
                // Let's avoid self Loop
                if(u==v)
                {
                    cout<<"Self Loop not allowed"<<endl;
                    continue;
                }
                if(u<0 || v<0 || u>=v_count || v>=v_count)
                {
                    cout<<"Invalid Edge"<<endl;
                    continue;
                }
                if(arr[u].search(v))
                {
                    cout<<"Duplicate Edge"<<endl;
                    continue;
                }
                arr[u].insertAtLast(v);
                arr[v].insertAtLast(u);
                i++;
            }
        }
        bool addEdge(int u,int v)
        {
                // Let's avoid self Loop
                if(u==v)
                {
                    cout<<"Self Loop not allowed"<<endl;
                    return false;
                }
                else if(u<0 || v<0 || u>=v_count || v>=v_count)
                {
                    cout<<"Invalid Edge"<<endl;
                    return false;
                }
                else if(arr[u].search(v))
                {
                    cout<<"Duplicate Edge"<<endl;
                    return false;
                }
                else
                {
                    arr[u].insertAtLast(v);
                    arr[v].insertAtLast(u);
                    return true;
                }
        }
};
int main()
{

    return 0;
}