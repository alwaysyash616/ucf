/*
 Assignment: 23
 Problem: 02
 Topic: More on Functions
 Description: Write a function to calculate HCF of two numbers. (TSRS)
 Date: 18-12-2025
*/
#include<stdio.h>
int main()
{
    int x,y;
    int hcf(int,int);
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("HCF: %d\n",hcf(x,y));
    return 0;
}

int hcf(int a, int b)
{
    int i=1,gcd;
    if(a<0)
        a*=-1;
    if(b<0)
        b*=-1;
    if(a==0 && b!=0)
        return b;
    if(a!=0 && b==0)
        return a;
    if(a==b && b==0)
        return 0;
    if(a==b)
        return a;
    while(i<=(a<b?a:b))
    {
        if(a%i==0 && b%i==0)
            gcd=i;
        i++;
    }
    return gcd;
}