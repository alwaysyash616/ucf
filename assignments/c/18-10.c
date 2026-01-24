/*
 Assignment: 18
 Problem: 10
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
 ABCDCBA
 ABC CBA
 AB   BA
 A     A
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
                printf("%c",64+x);
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