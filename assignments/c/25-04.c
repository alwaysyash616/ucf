/*
 Assignment: 25
 Problem: 04
 Topic: Recursion
 Description: Write a recursive function to print first N odd natural numbers in reverse order
 Date: 19-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void odd(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    odd(n);
    printf("\n");
    return 0;
}

void odd(int n)
{
    printf("%d ",2*n-1);
    if(n>1)
        odd(n-1);
}