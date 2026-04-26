/*
 Assignment: 19
 Problem: 06
 Topic: Sorting
 Description: Define a function to implement quick sort using iteration.
 Date: 24-02-2026
*/
#include<iostream>
using namespace std;
struct Range
{
    int l,r;
};

class node
{
    public:
        Range item;
        node *next;
};
class Stack
{
    private:
        node *top;
    public:
        Stack()
        {
            top=nullptr;
        }
        void push(Range data)
        {
            node *temp=new node;
            temp->item.l=data.l;
            temp->item.r=data.r;
            temp->next=top;
            top=temp;
        }
        Range peek()
        {
            if(top)
            {
                return top->item;
            }
            throw "Stack is Empty";
        }
        Range pop()
        {
            Range val;
            if(top)
            {
                node *p=top;
                top=p->next;
                val.l=p->item.l;
                val.r=p->item.r;
                delete p;
                return val;
            }
            throw "Stack is Empty";
        }
        ~Stack()
        {
            while(top)
                pop();
        }
        bool isEmpty()
        {
            return top==nullptr;
        }
};
void swap(int arr[],int a,int b)
{
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int quick(int arr[],int left,int right)
{
    int l=left,r=right;
    int loc=left;
    while(left<right)
    {
        while(loc<right && arr[loc]<=arr[right])
            right--;
        if(loc!=right)
        {
            swap(arr,loc,right);
            loc=right;
        }
        while(left<loc && arr[left]<=arr[loc])
            left++;
        if(left!=loc)
        {
            swap(arr,left,loc);
            loc=left;
        }
    }
    return loc;
    // if(l<loc-1)
    //     quickSort(arr,l,loc-1);
    // if(loc+1<r)
    //     quickSort(arr,loc+1,r);
}
void quickSort(int arr[],int size)
{
    Stack s1;
    Range temp;
    int loc;
    temp.l=0;
    temp.r=size-1;
    s1.push(temp);
    while(!s1.isEmpty())
    {
        temp=s1.pop();
        if(temp.l<temp.r)
        {
            loc=quick(arr,temp.l,temp.r);
            if(loc-temp.l > temp.r-loc)
            {
                s1.push({temp.l,loc-1});
                s1.push({loc+1,temp.r});
            }
            else
            {
                s1.push({loc+1,temp.r});
                s1.push({temp.l,loc-1});
            }
        }
    }
}
int main()
{
    int a[10]={23,100,1,-19,6,81,10,9,11,-1};
    quickSort(a,10);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}