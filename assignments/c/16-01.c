/*
 Assignment: 16
 Problem: 01
 Topic: Level up with loops
 Description: Write a program to find the Nth term of the Fibonacci series.
 Date: 12-12-2025
*/
#include<stdio.h>
int main()
{
    int a=0,b=1,c,i=3,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=0)
        printf("Invalid input");
    else if(n==1)
        printf("%d",a);
    else if(n==2)
        printf("%d",b);
    else
    {
        while(i<=n)
        {
            c=a+b;
            a=b;
            b=c;
            i++;
        }
        printf("%d",c);
    }
    printf("\n");
    return 0;
}