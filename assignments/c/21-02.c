/*
 Assignment: 21
 Problem: 02
 Topic: Functions
 Description: Write a function to calculate simple interest. (TSRS)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    int p,r,t;
    float si(int,int,int);
    printf("Enter principle amount: ");
    scanf("%d",&p);
    printf("Enter rate: ");
    scanf("%d",&r);
    printf("Enter time: ");
    scanf("%d",&t);

    printf("SI: %f\n",si(p,r,t));
    return 0;
}

float si(int p, int r, int t)
{
    float s=(p*r*t)/100.0;
    return s;
}