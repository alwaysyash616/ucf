/*
 Assignment: 25
 Problem: 02
 Topic: Recursion
 Description: Write a recursive function to print first N natural numbers in reverse order
 Date: 19-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void printn(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    printn(n);
    printf("\n");
    return 0;
}

void printn(int n)
{
    printf("%d ",n);
    if(n>1)
        printn(n-1);
}