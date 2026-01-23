/*
 Assignment: 01
 Problem: 05
 Topic: Revisiting C Language
 Description: Write a C function to check wheather a given number is a Prime number or not. (TSRS)
 Date: 10-01-2026
*/
#include<stdio.h>
int main()
{
    int a;
    int prime(int);
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%s",prime(a)==1?"Prime":"Not Prime");
    printf("\n");
    return 0;
}

int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            break;
    if(i==n)
        return 1;
    else
        return 0;
}
