/*
 Assignment: 16
 Problem: 02
 Topic: Level up with loops
 Description: Write a program to print first N terms of Fibonacci series
 Date: 12-12-2025
*/
#include<stdio.h>
int main()
{
    int a=0,b=1,c,i=3,n=1,terms;
    printf("Enter a number: ");
    scanf("%d",&terms);
    if(terms<=0)
        printf("Invalid Input\n");
    while(n<=terms)
    {
        if(n==1)
            printf("%d\t",a);
        else if(n==2)
            printf("%d\t",b);
        else
        {
            while(i<=n)
            {
                c=a+b;
                a=b;
                b=c;
                i++;
            }
            printf("%d\t",c);
        }
        a=0;
        b=1;
        i=3;
        n++;
    }
    printf("\n");
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int a=0,b=1,c,i=3,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=0)
        printf("Invalid Output");
    if(n>=1)
        printf("%d\n",a);
    if(n>=2)
        printf("%d\n",b);
    while(i<=n)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
}
*/