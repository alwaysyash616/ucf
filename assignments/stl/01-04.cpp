/*
 Assignment: 01
 Problem: 04
 Topic: Template Function
 Description: Define a function template to bubbleSort an array of any type.
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;

template <typename X>
void printValues(X a[],int size)
{
    int i;
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

template <typename X>
void bubbleSort(X a[],int size)
{
    int i,j;
    X temp;
    for(i=1;i<=size-1;i++)
    {
        for(j=0;j<size-i;j++)
        {            
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[5]={5,-1,7,0,100};
    float b[10]={1.1,3.14,0,10.5,9.3,1.1,9.9,-1.2,0,2.3};
    char c[5]={'a','A','e','K','b'};

    bubbleSort(a,5);
    bubbleSort(b,10);
    bubbleSort(c,5);

    printValues(a,5);
    printValues(b,10);
    printValues(c,5);
    cout<<endl;
    return 0;
}