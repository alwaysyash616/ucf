/*
 Assignment: 32
 Problem: 04
 Topic: Arrays and Functions
 Description: Write a function to merge two arrays of same size sorted in descending order.
 Date: 23-12-2025
*/
#include<stdio.h>
void sort(int[],int);
int main()
{
    int a[5],b[5],c[10];
    void input(int[],int);
    void output(int[],int);
    void merge(int[],int[],int[]);

    printf("Enter 5 numbers for I array\n");
    input(a,5);
    printf("Enter 5 numbers for II array\n");
    input(b,5);

    merge(a,b,c);
    output(c,10);
    printf("\n");
    return 0;
}

void merge(int b[],int c[],int d[])
{
    int i;
    for(i=0;i<5;i++)
    {
        d[i]=b[i];
        d[i+5]=c[i];
    }
    sort(d,10);
}

void sort(int b[],int size)
{
    int i,j,k;
    for(i=0;i<size;i++)
    {
        k=i;
        for(j=i;j<size;j++)
            if(b[j]>b[k])
                k=j;
        if(i!=size-1)
            b[k]=(b[i]+b[k])-(b[i]=b[k]);
    }
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