/*
 Assignment: 01
 Problem: 07
 Topic: Input and output in C language
 Description: Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
 Date: 05-12-2025
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Sum is %d",a+b);
    printf("\n");
    return 0;
}