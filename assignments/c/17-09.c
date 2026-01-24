/*
 Assignment: 17
 Problem: 09
 Topic: Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 A B C D E
   B C D E
     C D E
       D E
         E
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",64+j);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}