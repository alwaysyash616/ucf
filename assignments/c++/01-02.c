/*
 Assignment: 01
 Problem: 02
 Topic: Revisiting C Language
 Description: Write a C program to calculate factorial of a number.
 Date: 10-01-2026
*/
#include<stdio.h>
int main()
{
    int a,i,fact=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact*=i;
    }
    printf("Factorial: %d",fact);
    printf("\n");
    return 0;
}