/*
 Assignment: 25
 Problem: 05
 Topic: Recursion
 Description: Write a recursive function to print first N even natural numbers
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
    if(n>1)
        even(n-1);
    printf("%d ",2*n);
}