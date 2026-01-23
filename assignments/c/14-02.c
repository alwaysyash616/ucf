/*
 Assignment: 14
 Problem: 02
 Topic: Use any loop
 Description: Write a program to count digits in a given number
 Date: 11-12-2025
*/
#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a number");
    scanf("%d",&x);
    while(x)
    {
        x/=10;
        count++;
    }
    printf("%d\n",count);
}