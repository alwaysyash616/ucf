/*
 Assignment: 18
 Problem: 01
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
       *
     * * *
   * * * * *
 * * * * * * *
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
