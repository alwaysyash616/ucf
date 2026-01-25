/*
 Assignment: 31
 Problem: 03
 Topic: Arrays and Functions
 Description: Write a function to sort an array of any size. (TSRN)
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int i,a[4];
    void sort(int[],int);
    printf("Enter 4 numbers\n");
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);

    sort(a,4);
    printf("Sorted: ");
    for(i=0;i<4;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

void sort(int b[],int size)
{
    int i,j,k;
    for(i=0;i<size;i++)
    {
        k=0;
        for(j=0;j<size-i;j++)
            if(b[j]>b[k])
                k=j;
        if(i!=size-1)
            b[k]=(b[size-1-i]+b[k])-(b[size-1-i]=b[k]);
    }
}