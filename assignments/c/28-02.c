/*
 Assignment: 28
 Problem: 02
 Topic: More on Recursion
 Description: Write a recursive function to calculate HCF of two numbers
 Date: 20-12-2025
*/
#include<stdio.h>
int main()
{
    int x,y;
    int hcf(int,int);
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);

    printf("%d",hcf(x,y));
    printf("\n");
    return 0;
}

int hcf(int p,int q)
{
    int gcd;
    if(p>q)
        q=(p+q)-(p=q);
    if(!(q%p))
        return p;
    gcd=hcf(q%p,p);
    return gcd;
}