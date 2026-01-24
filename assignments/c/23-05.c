/*
 Assignment: 23
 Problem: 05
 Topic: More on Functions
 Description: Write a function to print first N prime numbers (TSRN)
 Date: 18-12-2025
*/
#include<stdio.h>
int main()
{
    int n;
    void np(int);
    printf("Enter a number: ");
    scanf("%d",&n);

    np(n);
    printf("\n");
    return 0;
}

void np(int n)
{
    int a=1,i;
    while(n>0)
    {
        for(i=2;i<a;i++)
            if(a%i==0)
                break;
        if(i==a)
        {
            printf("%d\n",a);
            n--;
        }
        a++;
    }
}
