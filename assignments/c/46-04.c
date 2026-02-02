/*
Assignment: 46
Problem: 04
Topic: DMA
Description: Write a function to merge two array elements and store it in dynamically created array. Return address of this dynamically created array.
Date: 06-01-2025
*/
#include<stdio.h>
#include<stdlib.h>
int* merge(int*,int,int*,int);
int main()
{
    int *p,i;
    int a[]={1,2,3,4,5,6},b[]={7,8,9,10};
    p=merge(a,6,b,4);
    printf("Merged: ");
    for(i=0;i<10;i++)
        printf(" %d",*(p+i));
    printf("\n");
    return 0;
}

int* merge(int *a,int size1,int *b,int size2)
{
    int *p,i;
    p=(int*)malloc(sizeof(int)*(size1+size2));
    for(i=0;i<size1+size2;i++)
    {
        if(i<size1)
            *(p+i)=*(a+i);
        else
            *(p+i)=*(b+i-size1);
    }
    return p;
}