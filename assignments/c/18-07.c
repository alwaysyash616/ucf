/*
 Assignment: 18
 Problem: 07
 Topic: More on Star Pattern Problems
 Description: Write a program to draw the following pattern
 Date: 13-12-2025
     1
    1 1
   1 2 1
  1 2 2 1
 1 2 3 2 1
*/
#include<stdio.h>
int main()
{
    int i,j,x=1,descision=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && descision==1)
                printf("%d",x);
            else
                printf(" ");
            if(j>=6-i && j<=4+i && descision==1 && i==3)
                x=x==1?2:1;
            if(j>=6-i && j<=4+i && descision==1 && i==4)
            {
                x=2;
                if(j==6)
                    x=1;
            }
            if(j>=6-i && j<=4+i && descision==1 && i==5)
            {
                if(j<5)
                    x++;
                else
                    x--;
            }
            if(j>=6-i && j<4+i && i!=1)
                descision=descision==1?0:1;
        }
        printf("\n");
        x=1;
    }
    printf("\n");
    return 0;
}