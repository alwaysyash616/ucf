/*
 Assignment: 18
 Problem: 09
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 1234321
 123 321
 12   21
 1     1
*/
#include<stdio.h>
int main()
{
    int i,j,x=1,direction=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i>=2 && j>=6-i && j<=2+i)
                printf(" ");
            else
                printf("%d",x);
            if(j==4)
                direction=-1;
            x+=direction;
        }
        printf("\n");
        direction=1;
        x=1;
    }
    printf("\n");
    return 0;
}