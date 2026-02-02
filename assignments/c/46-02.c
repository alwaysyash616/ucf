/*
Assignment: 46
Problem: 02
Topic: DMA
Description: Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accomodate the data values. Now take the input from the user and display the average of data values.
Date: 06-01-2025
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i,sum=0;
    printf("Enter the total number of values to be stored: ");
    scanf("%d",&n);
    p=(int*)calloc(4,n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    system("clear");
    for(i=0;i<n;i++)
        sum+=*(p+i);
    printf("Average: %f",sum/(n*1.0));
    printf("\n");
    return 0;
}