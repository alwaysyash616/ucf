/*
 Assignment: 19
 Problem: 07
 Topic: Sorting
 Description: Define a function to implement merge sort using recursion.
 Date: 24-02-2026
*/
#include<iostream>
using namespace std;
void mergeSort(int[],int,int,int*);
int main()
{
    int A[10]={10,9,8,7,6};
    int *temp=new int[5];
    mergeSort(A,0,4,temp);
    delete []temp;
    for(int i=0;i<5;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}

void mergeSort(int arr[],int l,int r,int *temp)
{
    int i,j,k,m;
    m=(l+r)/2;
    if(l<m)
        mergeSort(arr,l,m,temp);
    if(m+1<r)
        mergeSort(arr,m+1,r,temp);
    // temp=new int[r-l+1];
    i=l;
    j=m+1;
    k=0;
    while(true)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
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
    // delete []temp;
}

/*
I implemented Merge Sort using recursion and tried to handle edge cases carefully. I have tested it with distinct numbers using dry runs, and it seems logically correct to me.

However, I haven’t specifically verified behavior with duplicates or other special cases yet.

The issue is that I am getting a **segmentation fault (core dumped)** at runtime even for a basic test case like:

int main()
{
int A[10]={10,9,8,7,6,5,4,3,2,1};
mergeSort(A,0,9);
for(int i=0;i<10;i++)
cout<<A[i]<<" ";
cout<<endl;
return 0;
}

I believe the logic is mostly correct, so I’m unsure where the runtime issue is coming from.

Could someone help identify what might be causing the segmentation fault?

*/