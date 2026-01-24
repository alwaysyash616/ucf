/*
 Assignment: 22
 Problem: 03
 Topic: Functions
 Description: Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
 Date: 17-12-2025
*/
#include<stdio.h>
int main()
{
    int npr(int,int);
    int n,r;
    printf("Enter items: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    
    printf("%d\n",npr(n,r));
    return 0;
}

int npr(int items, int r)
{
    int factorial(int);
    if(r>=0 && r<=items)
    {
        if(r==0)
            return 1;
        else
        {
            return factorial(items)/factorial(items-r);
        }
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