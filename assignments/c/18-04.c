/*
 Assignment: 18
 Problem: 04
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
    1
   121
  12321
 1234321
*/
#include<stdio.h>
int main()
{
    int i,j,x=1,direction=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",x);
                if(i!=1)
                {
                    if(x==i)
                        direction=-1;
                    x+=direction;
                }
            }
            else
                printf(" ");
        }
        x=1;
        direction=1;
        printf("\n");
    }
    printf("\n");
    return 0;
}