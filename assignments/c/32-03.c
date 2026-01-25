/*
 Assignment: 32
 Problem: 03
 Topic: Arrays and Functions
 Description: Write a function to print all unique elements in an array.
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int i,a[10];
    void unique(int[],int);
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("Unique elements: ");
    unique(a,10);
    printf("\n");
    return 0;
}

void unique(int b[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        if(b[i]!=-1)
        {
            printf("%d ",b[i]);
            for(j=i+1;j<size;j++)
                if(b[i]==b[j])
                    b[j]=-1;
        }
    }
}