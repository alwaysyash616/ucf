/*
 Assignment: 01
 Problem: 09
 Topic: Input and output in C language
 Description: Write a program to calculate area of a rectangle. Input appropriate data from the user.
 Date: 05-12-2025
*/
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter length: ");
    scanf("%f",&a);
    printf("Enter breadth: ");
    scanf("%f",&b);
    printf("Area is %f",a*b);
    printf("\n");
    return 0;
}