/*
 Assignment: 26
 Problem: 02
 Topic: Recursion
 Description: Write a recursive function to print squares of first N natural numbers
 Date: 19-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void squares(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    squares(n);
    printf("\n");
    return 0;
}

void squares(int n)
{
    if(n>1)
        squares(n-1);
    printf("%d ",n*n);
}