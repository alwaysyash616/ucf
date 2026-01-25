/*
 Assignment: 29
 Problem: 03
 Topic: Arrays
 Description: Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
 Date: 22-12-2025
*/
#include<stdio.h>
int main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]&1)
            odd+=a[i];
        else
            even+=a[i];
    }
    printf("Even: %d\nOdd: %d\n",even,odd);
    printf("\n");
    return 0;
}