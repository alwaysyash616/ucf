/*
 Assignment: 19
 Problem: 07
 Topic: Sorting
 Description: Define a function to implement merge sort using recursion.
 Date: 24-02-2026
*/
#include<iostream>
using namespace std;
void mergeSort(int[],int,int);
int main()
{
    int A[10]={10,9,8,7,6,5,4,3,2,1};
    mergeSort(A,0,9);
    for(int i=0;i<10;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}

void mergeSort(int arr[],int l,int r)
{
    int i,j,k,m,*temp;
    m=(l+r)/2;
    if(l<m)
        mergeSort(arr,l,m);
    if(m+1<r)
        mergeSort(arr,m+1,r);
    temp=new int[r-l+1];
    i=l;
    j=m+1;
    k=0;
    while(true)
    {
        if(arr[i]<arr[j])
            temp[k]=arr[i++];
        else
            temp[k]=arr[j++];
        k++;
        if(i>m)
        {
            while(j<=r)
            {
                temp[k]=arr[j];
                k++;
                j++;
            }
            break;
        }
        if(j>r)
        {
            while(i<=m)
            {
                temp[k]=arr[i];
                i++;
                k++;
            }
            break;
        }
    }
    i=0;
    while(i<r-l+1)
        arr[l+i]=temp[i++];
    delete []temp;
}