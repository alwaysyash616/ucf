/*
 Assignment: 15
 Problem: 01
 Topic: Level up with loops
 Description: Write a program to print all Prime numbers under 100 
 Date: 12-12-2025
*/
#include<stdio.h>
int main()
{
    int x=1,i;
    while(x<=100)
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