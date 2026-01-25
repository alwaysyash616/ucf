/*
 Assignment: 27
 Problem: 02
 Topic: More on Recursion
 Description: Write a recursive function to calculate sum of first N odd natural numbers
 Date: 20-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int odd(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",odd(n));
    printf("\n");
    return 0;
}

int odd(int n)
{
    if(n==1)
        return 1;
    return (2*n-1)+odd(n-1);
}