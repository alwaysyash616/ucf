/*
 Assignment: 17
 Problem: 07
 Topic: Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 A B C D E
   A B C D
     A B C
       A B
         A
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
                printf("%c",65+j-i);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}