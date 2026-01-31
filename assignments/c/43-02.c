/*
Assignment: 43
Problem: 02
Topic: Pointers
Description: Write a function to sort an array of int type values. [ void sort(int *ptr,int size);]
Date: 02-01-2025
*/
#include<stdio.h>
void sort(int*,int);
int main()
{
    int a[10]={18,15,4,-3,6,9,19,3,40,0},i;
    sort(a,10);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
void sort(int *p,int size)
{
    int i,j;
    for(i=1;i<10;i++)
    {
        for(j=0;j<size-i;j++)
            if(p[j]>p[j+1])
                p[j+1]=(p[j]+p[j+1])-(p[j]=p[j+1]);
    }
}