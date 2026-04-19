/*
 Assignment: 19
 Problem: 05
 Topic: Sorting
 Description: Define a function to implement quickSort sort using recursion.
 Date: 24-02-2026
*/
#include<iostream>
using namespace std;
void swap(int arr[],int a,int b)
{
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void quickSort(int arr[],int left,int right)
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
    if(l<loc-1)
        quickSort(arr,l,loc-1);
    if(loc+1<r)
        quickSort(arr,loc+1,r);
}
int main()
{
    int a[10]={23,100,1,-19,6,81,10,9,11,-1};
    quickSort(a,0,9);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}