/*
 Assignment: 28
 Problem: 01
 Topic: More on Recursion
 Description: Write a recursive function to calculate factorial of a given number
 Date: 20-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int factorial(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",factorial(n));
    printf("\n");
    return 0;
}

int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}