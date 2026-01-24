/*
 Assignment: 24
 Problem: 04
 Topic: More on Functions
 Description: Write a function to print all Armstrong numbers between two given numbers. (TSRN)
 Date: 18-12-2025
*/
#include<stdio.h>
int isArmstrong(int);
void printArm(int,int);
int power(int,int);
int digits(int);
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    printArm(a,b);
    printf("\n");
    return 0;
}

void printArm(int x,int y)
{
    while(x<y-1)
    {
        x++;
        if(isArmstrong(x))
            printf("%d ",x);
    }
}

int isArmstrong(int n)
{
    int d=digits(n);
    int sum=0;
    int num;
    if(n<0)
        n*=-1;
    num=n;
    if(n==0)
        return 1;
    else
    {
        while(n>0)
        {
            sum+=power(n%10,d);
            n/=10;
        }
        if(num==sum)
            return 1;
        else
            return 0;
    }
}

int power(int d,int p)
{
    int result=d;
    while(p>1)
    {
        result*=d;
        p--;
    }
}

int digits(int n)
{
    int d=0;
    if(n<0)
        n*=-1;
    while(n>0)
    {
        n/=10;
        d++;
    }
    return d;
}