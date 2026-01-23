/*
 Assignment: 01
 Problem: 01
 Topic: Revisiting C Language
 Description: Write a C program to check weather a given number is even or odd.
 Date: 10-01-2025
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%s",a&1?"Odd":"Even");
    printf("\n");
    return 0;
}