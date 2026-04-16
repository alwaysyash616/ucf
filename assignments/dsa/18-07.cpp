/*
 Assignment: 18
 Problem: 07
 Topic: Graph List Representation
 Description: Define a method to print graph (print values of adjacency list).
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
        node* getStart()
        {
            return start;
        }
};
class Queue
{
    private:
        int capacity,front,rear,*ptr;
    public:
        Queue(int c)
        {
            capacity=c<=0?1:c;
            front=rear=-1;
            ptr=new int[capacity];
        }
        void enque(int data)
        {
            if((rear+1)%capacity==front)
            {
                cout<<"Overflow"<<endl;
                return;
            }
            if(front==-1)
                front=0;
            rear=(rear+1)%capacity;
            ptr[rear]=data;
        }
        // View rear element
        int getBack()
        {
            if(front==-1)
                throw "Queue Underflow";
            return ptr[rear];
        }
        // View front element
        int getFront()
        {
            if(front==-1)
                throw "Queue Underflow";
            return ptr[front];
        }
        void dequeue()
        {
            if(front==-1)
            {
                cout<<"Queue Underflow"<<endl;
                return;
            }
            if(front==rear)
                front=rear=-1;
            else
            front=(front+1)%capacity;
        }
        ~Queue()
        {
            capacity=0;     // Optional
            front=rear=-1;  // Optional
            delete []ptr;
            ptr=nullptr;    // Optional
        }
        bool isFull()
        {
            if((rear+1)%capacity==front)
                return true;
            return false;
        }
        bool isEmpty()
        {
            if(front==-1)
                return true;
            return false;
        }
        int count()
        {
            if(isEmpty())
                return 0;
            else if(isFull())   // Optional
                return capacity;
            else
                return front<=rear ? rear-front+1 : capacity-(front-rear-1);
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
        ~Graph()
        {
            delete []arr;
            arr=nullptr;
            v_count=0;
        }

        void printGraph()
        {
            node *p=nullptr;
            int i;
            for(i=0;i<v_count;i++)
            {
                cout<<"v"<<i<<": ";
                p=arr[i].getStart();
                while(p)
                {
                    cout<<p->item<<" ";
                    p=p->next;
                }
                cout<<endl;
            }
        }

        void bfs()
        {
            Queue Q(v_count);
            node *p=nullptr;
            int i,n;
            bool visited[v_count];
            for(i=0;i<v_count;i++)
                visited[i]=false;
            Q.enque(0);
            visited[0]=true;
            while(!Q.isEmpty())
            {
                n=Q.getFront();
                cout<<"v"<<n<<" ";
                Q.dequeue();

                p=arr[n].getStart();
                while(p)
                {
                    if(visited[p->item]==false)
                    {
                        Q.enque(p->item);
                        visited[p->item]=true;
                    }
                    p=p->next;
                }
            }
        }
};
int main()
{

    return 0;
}