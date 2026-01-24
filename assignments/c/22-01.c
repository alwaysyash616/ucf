/*
 Assignment: 22
 Problem: 01
 Topic: Functions
 Description: Write a function to calculate the factorial of a number. (TSRN)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int factorial(int);
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    return 0;
}

int factorial(int n)
{
    int i=1,f=1;
    while(i<=n)
    {
        f*=i;
        i++;
    }
    return f;
}