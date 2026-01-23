/*
 Assignment: 01
 Problem: 08
 Topic: Input and output in C language
 Description: Write a program to calculate square of a given number. Number is entered by the user.
 Date: 05-12-2025
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Square is %d",a*a);
    printf("\n");
    return 0;
}