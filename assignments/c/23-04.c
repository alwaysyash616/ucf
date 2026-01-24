/*
 Assignment: 23
 Problem: 04
 Topic: More on Functions
 Description: Write a function to find the next prime number of a given number. (TSRS)
 Date: 18-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    int np(int);
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",np(n));
    return 0;
}

int np(int a)
{
    int i;
    while(1)
    {
        a++;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
                break;
        }
        if(i==a)
            return a;
    }
}