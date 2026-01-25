/*
 Assignment: 29
 Problem: 04
 Topic: Arrays
 Description: Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
 Date: 22-12-2025
*/
#include<stdio.h>
int main()
{
    int a[10],i,k;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    
    k=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>k)
            k=a[i];
    }
    printf("Greatest: %d",k);
    printf("\n");
    return 0;
}