/*
 Assignment: 21
 Problem: 05
 Topic: Functions
 Description: Write a function to print first N odd natural numbers. (TSRN)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void firstnodd(int);
    printf("Enter a number: ");
    scanf("%d",&n);
    firstnodd(n);
    return 0;
}

void firstnodd(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d\n",2*i-1);
        i++;
    }
}