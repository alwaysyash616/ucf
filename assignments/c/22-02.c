/*
 Assignment: 22
 Problem: 02
 Topic: Functions
 Description: Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRN)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    int ncr(int,int);
    int n,r;
    printf("Enter a number of items: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    printf("%d\n",ncr(n,r));
    return 0;
}

int ncr(int items, int r)
{
    int result;
    int factorial(int);
    if(r>=0 && r<=items)
    {
        if(r==0 || r==items)
            return 1;
        result=factorial(items)/(factorial(items-r)*factorial(r));
        return result;
    }
    else
        return -1;
}

int factorial(int n)
{
    int i=1,f=1;
    if(n==0)
        return 1;
    while(i<=n)
    {
        f*=i;
        i++;
    }
    return f;
}