/*
 Assignment: 32
 Problem: 02
 Topic: Arrays and Functions
 Description: Write a function to count a total of duplicate elements in an array. (Means element that occurs 2 times in an array)
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    void input(int[],int);
    void output(int[],int);
    int duplicates(int[],int);
    int a[10];
    printf("Enter 10 numbers\n");
    input(a,10);
    output(a,10);
    printf("\nDuplicates: %d",duplicates(a,10));
    printf("\n");
    return 0;
}

int duplicates(int b[],int size)
{
    int i,j,count=0;
    for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
            if(b[i]==b[j])
                count++;
    return count;
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
