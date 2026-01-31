/*
Assignment: 43
Problem: 03
Topic: Pointers
Description: Write a function to merge two arrays in a given array. [void merge(int *arr1,int size1,int *arr2,int size2,int *arr3);]
Date: 02-01-2025
*/
#include<stdio.h>
void merge(int*,int,int*,int,int*);
int main()
{
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},c[10],i;
    merge(a,5,b,5,c);
    for(i=0;i<10;i++)
        printf("%d ",c[i]);
    printf("\n");
    return 0;
}
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,x;
    for(i=0;i<size1;i++)
        arr3[i]=arr1[i];
    x=i;    
    for(i=0;i<size2;i++)
        arr3[i+x]=arr2[i];
}