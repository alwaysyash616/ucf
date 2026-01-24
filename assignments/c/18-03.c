/*
 Assignment: 18
 Problem: 03
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
    *
   * *
  * * *
 * * * *
*/
#include<stdio.h>
int main()
{
    int i,j,descision=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i && descision==1)
                printf("*");
            else
                printf(" ");
            if(j>=5-i && j<=3+i)
                descision=descision==1?0:1;
        }
        printf("\n");
        descision=1;
    }
    printf("\n");
    return 0;
}