/*
 Assignment: 18
 Problem: 06
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 ABCDCBA
  ABCBA
   ABA
    A
*/
#include<stdio.h>
int main()
{
    int i,j,character=64,direction=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                character+=direction;
                printf("%c",character);
                if(j==4)
                    direction=-1;
            }
            else
                printf(" ");
        }
        character=64;
        direction=1;
        printf("\n");
    }
    printf("\n");
    return 0;
}