/*
 Assignment: 16
 Problem: 05
 Topic: Level up with loops
 Description: Write a program to print all Armstrong numbers under 1000
 Date: 12-12-2025
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,num,digits=0,s=0,digit;
    while(n<=1000)
    {
        num=n;
        while(n>0)
        {
            n/=10;
            digits++;
        }
        n=num;
        while(n>0)
        {
            digit=n%10;
            s+=pow(digit,digits);
            n/=10;
        }
        n=num;
        if(s==num)
            printf("%d\t",num);
        digits=0;
        s=0;
        n++;
    }
    printf("\n");
    return 0;
}