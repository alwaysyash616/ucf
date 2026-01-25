/*
 Assignment: 31
 Problem: 02
 Topic: Arrays and Functions
 Description: Write a function to find the smallest number from the given array of any size. (TSRS)
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int i,a[10];
    int smallest(int[],int);
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    
    printf("Smallest: %d",smallest(a,10));
    printf("\n");
    return 0;
}

int smallest(int b[],int size)
{
    int i,k;
    k=b[0];
    for(i=0;i<size;i++)
        if(b[i]<k)
            k=b[i];
    return k;
}