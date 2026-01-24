/*
 Assignment: 22
 Problem: 05
 Topic: Functions
 Description: Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRS)
 Date: 17-12-2025
*/
#include<stdio.h>
int isprime(int);
int main()
{
    void pf(int);
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("All Prime factors:\n");
    pf(n);
    printf("\b\b  \n");
    return 0;
}

void pf(int n)
{
    int i;
    for (i = 2; i <= n; i++)
    {
        if(isprime(i))
        {
            if(n%i==0)
            {
                printf("%d, ",i);
                n/=i;
                i--;
            }
        }
    }
}

int isprime(int a)
{
    int i;
    for(i=2;i<a;i++)
        if(a%i==0)
            break;
    if(i==a)
        return 1;
    else
        return 0;
}