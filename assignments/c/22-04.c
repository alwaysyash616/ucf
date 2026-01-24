/*
 Assignment: 22
 Problem: 04
 Topic: Functions
 Description: Write a function to check wheather a given number contains a given digit or not. (TSRS)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    int n,d;
    int nd(int,int);
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter digit to check in %d\n",n);
    scanf("%d",&d);
    printf("%d\n",nd(n,d));
    return 0;
}

int nd(int n, int d)
{
    while(n)
    {
        if(n%10==d)
            return 1;
        n/=10;
    }
    return 0;
}