/*
Assignment: 42
Problem: 01
Topic: Pointers
Description: Write a function to swap values of two int variables (TSRN).
Date: 01-01-2025
*/
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    printf("\n");
    return 0;
}

void swap(int *p,int *q)
{
    int r;
    r=*p;
    *p=*q;
    *q=r;
}