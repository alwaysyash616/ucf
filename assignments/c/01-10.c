/*
 Assignment: 01
 Problem: 10
 Topic: Input and output in C language
 Description: WAP to find area of the circle. Take radius of the circle as input.
 Date: 05-12-2025
*/
#include<stdio.h>
int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("Area is %f",3.14*r*r);
    printf("\n");
    return 0;
}