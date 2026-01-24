/*
 Assignment: 21
 Problem: 04
 Topic: Functions
 Description: Write a function to print first N natural numbers (TSRN)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void firstn(int);
    printf("Enter a number: ");
    scanf("%d",&n);
    firstn(n);
    return 0;
}

void firstn(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}