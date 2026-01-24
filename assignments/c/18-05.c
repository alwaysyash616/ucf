/*
 Assignment: 18
 Problem: 05
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 ABCDEFG
  ABCDE
   ABC
    A
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("%c",65+j-i);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}