/*
 Assignment: 31
 Problem: 05
 Topic: Arrays and Functions
 Description: Write a function to find the first occurance of adjacent duplicate values in in the array. Function has to return the value of the element.
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int a[5],i;
    int duplicate(int[],int);
    printf("Enter 5 numbers\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    
    printf("Duplicate: %d",duplicate(a,5));
    printf("\n");
    return 0;
}

int duplicate(int b[],int size)
{
    int i;
    for(i=0;i<4;i++)
        if(b[i]==b[i+1])
            return b[i];
    if(i==4)
    {
        printf("No adjacent duplicate\n");
        return -1;
    }
}