/*
 Assignment: 24
 Problem: 05
 Topic: More on Functions
 Description: Write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+5!/5... n!/n (TSRS)
 Date: 18-12-2025
*/
#include<stdio.h>
int factorial(int);
int sumSeries(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("Sum to %d-terms: %d\n",n,sumSeries(n));
    return 0;
}

int sumSeries(int k)
{
    int i,sum=0;
    for(i=1;i<=k;i++)
    {
        sum+=factorial(i)/i;
    }
    return sum;
}

int factorial(int n)
{
    int f;
    if(n==0)
        return 1;
    if(n<0)
        n*=-1;
    f=n;
    while(n>1)
    {
        f*=--n;
    }
    return f;
}