/*
 Assignment: 14
 Problem: 03
 Topic: Use any loop
 Description: Write a program to check wheather a given number is a Prime number or not
 Date: 11-12-2025
*/
#include<stdio.h>
int main()
{
    int x,i=2;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(i<x)
    {
        if(x%i==0)
            break;
        i++;
    }
    if(i==x)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}