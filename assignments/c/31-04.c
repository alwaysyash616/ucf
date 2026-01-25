/*
 Assignment: 31
 Problem: 04
 Topic: Arrays and Functions
 Description: Write a function to rotate an array by n positions in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32,29,40,12,70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40,12,70,32,29])
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int i,a[5]={32,29,40,12,70};
    void rotate(int[],int,int);

    for(i=0;i<5;i++)
        printf("%d ",a[i]); 

    rotate(a,3,-1);
    printf("\n");   
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

void rotate(int b[],int n,int d)
{
    int i,j;
    if(d==-1)
        for(i=1;i<=n;i++)
            for(j=0;j<4;j++)
                b[j+1]=(b[j]+b[j+1])-(b[j]=b[j+1]);
    else
        for(i=1;i<=n;i++)
            for(j=4;j>0;j--)
                b[j-1]=(b[j]+b[j-1])-(b[j]=b[j-1]);
}