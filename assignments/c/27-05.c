/*
 Assignment: 27
 Problem: 05
 Topic: More on Recursion
 Description: Write a recursive function to calculate sum of digits of a given number
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
    if(n<10)
        return n;
    return (n%10)+sum(n/10);
}