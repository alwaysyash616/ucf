/*
 Assignment: 26
 Problem: 05
 Topic: Recursion
 Description: Write a recursive function to print reverse of a given number
 Date: 19-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void reverse(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    reverse(n);
    printf("\n");
    return 0;
}

void reverse(int n)
{
    printf("%d",n%10);
    if(n>9)
        reverse(n/10);
}