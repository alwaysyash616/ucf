/*
Assignment: 46
Problem: 03
Topic: DMA
Description: Write a program to calculate the sum of n numbers entered by the user using malloc and free.
Date: 06-01-2025
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i,sum=0;
    printf("How many numbers you will enter: ");
    scanf("%d",&n);
    p=(int*)malloc(4*n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
        sum+=*(p+i);
    printf("Sum: %d",sum);
    printf("\n");
    return 0;
}