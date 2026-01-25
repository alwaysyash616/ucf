/*
 Assignment: 26
 Problem: 01
 Topic: Recursion
 Description: Write a recursive function to print first N even natural numbers in reverse order
 Date: 19-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void even(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    even(n);
    printf("\n");
    return 0;
}

void even(int n)
{
    printf("%d ",2*n);
    if(n>1)
        even(n-1);
}