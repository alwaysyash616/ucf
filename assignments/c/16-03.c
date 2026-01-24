/*
 Assignment: 16
 Problem: 03
 Topic: Level up with loops
 Description: Write a program to check wheather a given number is there in the Fibonacci series or not.
 Date: 12-12-2025
*/
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==a || n==b)
        printf("Yes\n");
    while(1)
    {
        c=a+b;
        if(c==n)
        {
            printf("Yes\n");
            break;
        }
        if(c>n)
        {
            printf("No\n");
            break;
        }
        a=b;
        b=c;
    }
    return 0;
}