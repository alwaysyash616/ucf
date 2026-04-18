/*
 Assignment: 19
 Problem: 02
 Topic: Sorting
 Description: Define a function to implement modified bubble sort to achieve O(n) time complexity in best case.
 Date: 24-02-2026
*/
#include<iostream>
using namespace std;
void optimizedBubbleSort(int arr[],int n)
{
    int i,j,temp;
    bool swapped=false;
    for(i=1;i<=n-1;i++)
    {
        swapped=false;
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=true;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(!swapped)
            break;
    }
}
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    optimizedBubbleSort(a,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    return 0;
}