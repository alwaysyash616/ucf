/*
 Assignment: 26
 Problem: 04
 Topic: Recursion
 Description: Write a recursive function to print octal of a given decimal number
 Date: 19-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void octal(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    octal(n);
    printf("\n");
    return 0;
}

void octal(int n)
{
    if(n>0)
    {
        octal(n/8);
        printf("%d",n%8);
    }
}