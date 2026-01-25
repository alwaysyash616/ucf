/*
 Assignment: 25
 Problem: 01
 Topic: Recursion
 Description: Write a recursive function to print first N natural numbers
 Date: 19-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void firstn(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    firstn(n);
    printf("\n");
    return 0;
}

void firstn(int n)
{
    // if(n==1)
    // {
    //     printf("1 ");
    //     return;
    // }
    if(n>1)
        firstn(n-1);
    printf("%d ",n);
}
