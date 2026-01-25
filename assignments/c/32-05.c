/*
 Assignment: 32
 Problem: 05
 Topic: Arrays and Functions
 Description: Write a function to count the frequency of each element of an array.
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int a[10];
    void input(int[],int);
    void frequency(int[],int);
    printf("Enter 10 numbers\n");
    input(a,10);

    frequency(a,10);
    printf("\n");
    return 0;
}

void frequency(int b[],int size)
{
    int i,j,count=1;
    for(i=0;i<size;i++)
        if(b[i]!=-1)
        {
            for(j=i+1;j<size;j++)
                if(b[i]==b[j])
                {
                    count++;
                    b[j]=-1;
                }
            printf("%d: %d\n",b[i],count);
            count=1;
        }
}

void input(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
        scanf("%d",&b[i]);
}