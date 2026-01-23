/*
 Assignment: 14
 Problem: 01
 Topic: Use any loop
 Description: Write a program to calculate factorial of a number
 Date: 11-12-2025
*/
#include<stdio.h>
int main()
{
    int x,f=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(x>0)
    {
        f*=x--;
    }
    printf("%d",f);
    printf("\n");
    return 0;
}