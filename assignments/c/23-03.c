/*
 Assignment: 23
 Problem: 03
 Topic: More on Functions
 Description: Write a function to check wheather a given number is Prime or not. (TSRS)
 Date: 18-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int isprime(int);
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",isprime(n));
    return 0;
}

int isprime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
            break;
    }
    if(i==a)
        return 1;
    else
        return 0;
}