/*
 Assignment: 30
 Problem: 01
 Topic: Arrays
 Description: Write a program to sort elements of an array of size 10. Take array values from the user.
 Date: 22-12-2025
*/
#include<stdio.h>
int main()
{
    int i,j,k,d,a[10];
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<10;i++)
    {
        d=0;
        k=a[d];
        for(j=0;j<10-i;j++)
        {
            if(a[j]>k)
            {
                k=a[j];
                d=j;
            }
        }
        if(i!=9)
            a[9-i]=(a[9-i]+a[d])-(a[d]=a[9-i]);
    }

    printf("\n");

    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    printf("\n");
    return 0;
}