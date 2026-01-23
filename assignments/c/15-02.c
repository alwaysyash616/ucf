/*
 Assignment: 15
 Problem: 02
 Topic: Level up with loops
 Description: Write a program to print all Prime numbers between two given numbers
 Date: 12-12-2025
*/
#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    while(x<=y)
    {
        i=2;
        while(i<x)
        {
            if(x%i==0)
                break;
            i++;
        }
        if(i==x)
            printf("%d\n",x);
        x++;
    }
    return 0;
}