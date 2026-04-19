/*
 Assignment: 19
 Problem: 04
 Topic: Sorting
 Description: Define a function to implement selection sort.
 Date: 24-02-2026
*/
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
    int i,j,s,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i,s=i;j<n;j++)
            if(arr[j]<arr[s])
                s=j;
        temp=arr[i];
        arr[i]=arr[s];
        arr[s]=temp;
    }
}
int main()
{
    int a[10]={23,100,1,-19,6,81,10,9,11,-1};
    selectionSort(a,10);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}