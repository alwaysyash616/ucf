/*
 Assignment: 24
 Problem: 01
 Topic: More on Functions
 Description: Write a function to print all Prime numbers between two given numbers. (TSRN)
 Date: 18-12-2025
*/
#include<stdio.h>
int main()
{
    void primes(int,int);
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);

    printf("Prime's between %d and %d are:\n",x,y);
    primes(x,y);
    printf("\n");
    return 0;
}

void primes(int a, int b)
{
    int i;
    for(a+=1;a<b;a++)
    {
        for(i=2;i<a;i++)
            if(a%i==0)
                break;
        if(i==a)
            printf("%d\n",a);
    }
}