/*
 Assignment: 17
 Problem: 05
 Topic: Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}