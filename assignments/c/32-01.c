/*
 Assignment: 32
 Problem: 01
 Topic: Arrays and Functions
 Description: Write a function to swap two elements of given array with specified indices.
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int a[10],i,j;
    void input(int[],int);
    void output(int[],int);
    void swap(int[],int,int);
    printf("Enter 10 numbers\n");
    input(a,10);
    printf("Array: ");
    output(a,10);

    printf("\nSpecify indices to swap values\n");
    scanf("%d%d",&i,&j);
    swap(a,i,j);
    printf("After swapping: ");
    output(a,10);
    printf("\n");
    return 0;
}

void swap(int b[],int i,int j)
{
    b[j]=(b[i]+b[j])-(b[i]=b[j]);
}

void output(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",b[i]);
}
void input(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
        scanf("%d",&b[i]);
}