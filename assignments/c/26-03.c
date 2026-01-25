/*
 Assignment: 26
 Problem: 03
 Topic: Recursion
 Description: Write a recursive function to print binary of a given decimal number
 Date: 19-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void bin(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    bin(n);
    printf("\n");
    return 0;
}

void bin(int n)
{
    if(n>0)
    {
        bin(n/2);
        printf("%d",n%2);
    }
}