/*
 Assignment: 17
 Problem: 06
 Topic: Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 1
 2 1
 3 2 1
 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",i-j+1);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}