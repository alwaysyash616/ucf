/*
 Assignment: 17
 Problem: 02
 Topic: Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
         *
       * *
     * * *
   * * * *
 * * * * *
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}