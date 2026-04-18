/*
 Assignment: 19
 Problem: 03
 Topic: Sorting
 Description: Define a function to implement insertion sort.
 Date: 24-02-2026
*/
#include<iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=-1;j--)
        {
            if(j>=0 && arr[j]>temp)
                arr[j+1]=arr[j];
            else
            {
                arr[j+1]=temp;
                break;
            }
        }
    }
}
int main()
{
    int a[10]={23,100,1,-19,6,81,10,9,11,-1};
    insertionSort(a,10);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}