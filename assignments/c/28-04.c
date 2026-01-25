/*
 Assignment: 28
 Problem: 04
 Topic: More on Recursion
 Description: Write a program in C to count the digits of given number using recursion
 Date: 20-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int digits(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",digits(n));
    printf("\n");
    return 0;
}

int digits(int n)
{
    int count;
    if(n<10)
        return 1;
    count=digits(n/10)+1;
    return count;
}