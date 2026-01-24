/*
 Assignment: 21
 Problem: 01
 Topic: Functions
 Description: Write a function to calculate the area of a circle. (TSRS)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    float r;
    float area(float);
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Area: %f\n",area(r));
    return 0;
}

float area(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}