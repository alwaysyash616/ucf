/*
 Assignment: 14
 Problem: 05
 Topic: Use any loop
 Description: Write a program to reverse a number
 Date: 11-12-2025
*/
#include<stdio.h>
int main()
{
    int x,temp=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(x)
    {
        temp=temp*10+x%10;
        x/=10;
    }
    printf("%d\n",temp);
    return 0;
}