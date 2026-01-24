/*
 Assignment: 24
 Problem: 02
 Topic: More on Functions
 Description: Write a function to print first N terms of Fibonacci series (TSRN)
 Date: 18-12-2025
*/
#include<stdio.h>
int main()
{
    void fibonacci(int);
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("First %d-terms of Fibonacci series are: ",n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int a=0,b=1,c;
    if(n==0)
    {
        printf("Invalid Input\n");
        return;
    }
    if(n<0)
        n*=-1;
    if(n==1)
    {
        printf("%d\n",a);
        return;
    }
    else if(n==2)
    {
        printf("%d %d\n",a,b);
        return;
    }
    else
    {
        printf("%d %d ",a,b);
        while(n-2>0)
            {
                c=a+b;
                printf("%d ",c);
                n--;
                a=b;
                b=c;
            }
    }
    printf("\n");
}