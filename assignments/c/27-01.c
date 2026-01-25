/*
 Assignment: 27
 Problem: 01
 Topic: More on Recursion
 Description: Write a recursive function to calculate sum of first N natural numbers
 Date: 20-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int sum(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",sum(n));
    printf("\n");
    return 0;
}

int sum(int n)
{
    int k;
    if(n==1)
        return 1;
    k=n+sum(n-1);
    return k;
}