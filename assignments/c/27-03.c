/*
 Assignment: 27
 Problem: 03
 Topic: More on Recursion
 Description: Write a recursive function to calculate sum of first N even natural numbers
 Date: 20-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int even(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",even(n));
    printf("\n");
    return 0;
}

int even(int n)
{
    int sum;
    if(n==1)
        return 2;
    sum=2*n+even(n-1);
}