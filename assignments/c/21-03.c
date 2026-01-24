/*
 Assignment: 21
 Problem: 03
 Topic: Functions
 Description: Write a function to check wheather a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int eo(int);
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",eo(n));
    return 0;
}

int eo(int n)
{   
    if(n&1)
        return 0;
    else
        return 1;
}