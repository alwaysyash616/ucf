/*
 Assignment: 30
 Problem: 05
 Topic: Arrays
 Description: Write a program in C to copy the elements of one array into another array. Take array values from the user.
 Date: 22-12-2025
*/
#include<stdio.h>
int main()
{
    int i,a[10],b[10];
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("\n");
    for(i=0;i<10;i++)
        b[i]=a[i];

    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    printf("\n");
    return 0;
}