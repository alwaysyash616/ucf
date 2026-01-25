/*
 Assignment: 30
 Problem: 04
 Topic: Arrays
 Description: Write a program to sort an array of 10 elements in descending order.
 Date: 22-12-2025
*/
#include<stdio.h>
int main()
{
    int i,j,k,a[10];
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<10;i++)
    {
        k=i;
        for(j=i;j<10;j++)
            if(a[j]>a[k])
                k=j;
        if(i!=9)
            a[k]=(a[i]+a[k])-(a[i]=a[k]);
    }

    printf("\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}