/*
 Assignment: 18
 Problem: 08
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 * * * * * * *
 * * *   * * *
 * *       * *
 *           *
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i>=2 && j>=6-i && j<=2+i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}