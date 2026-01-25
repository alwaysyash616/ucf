/*
 Assignment: 29
 Problem: 01
 Topic: Arrays
 Description: Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
 Date: 22-12-2025
*/
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        sum+=a[i];
    printf("%d",sum);
    printf("\n");
    return 0;
}