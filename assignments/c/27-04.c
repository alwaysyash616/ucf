/*
 Assignment: 27
 Problem: 04
 Topic: More on Recursion
 Description: Write a recursive function to calculate sum of squares of first N natural numbers
 Date: 20-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int squares(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",squares(n));
    printf("\n");
    return 0;
}

int squares(int n)
{
    int sum;
    if(n==1)
        return 1;
    return n*n+squares(n-1);
}