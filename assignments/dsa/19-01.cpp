/*
 Assignment: 19
 Problem: 01
 Topic: Sorting
 Description: Define a function to implement bubble sort
 Date: 24-02-2026
*/
#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i;
    int a[10]={23,100,1,-19,6,81,10,9,11,-1};
    bubbleSort(a,10);
    for(i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}