/*
 Assignment: 01
 Problem: 03
 Topic: Revisiting C Language
 Description: Write a C program to swap values of two int variables.
 Date: 10-01-2026
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    b=(a+b)-(a=b);
    printf("a=%d\nb=%d",a,b);
    printf("\n");
    return 0;
}