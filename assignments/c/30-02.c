/*
 Assignment: 30
 Problem: 02
 Topic: Arrays
 Description: Write a program to find second largest in an array. Take array values from the user.
 Date: 22-12-2025
*/
#include<stdio.h>
int main()
{
    int i,k,a[10];
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    k=0;
    for(i=0;i<10;i++)
        if(a[i]>a[k])
            k=i;

    a[9]=(a[k]+a[9])-(a[k]=a[9]);

    k=0;
    for(i=0;i<9;i++)
        if(a[i]>a[k])
            k=i;
    
    printf("\n");
    printf("%d",a[k]);
    printf("\n");
    return 0;
}