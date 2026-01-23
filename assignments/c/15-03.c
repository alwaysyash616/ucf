/*
 Assignment: 15
 Problem: 03
 Topic: Level up with loops
 Description: Write a program to find next Prime number of a given number
 Date: 12-12-2025
*/
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(1)
    {
        i=2;
        while(i<x)
        {
            if(x%i==0)
                break;
            i++;
        }
        if(i==x)
        {
            printf("%d\n",x);
            break;
        }
        x++;
    }
    return 0;
}