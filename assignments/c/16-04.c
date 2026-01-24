/*
 Assignment: 16
 Problem: 04
 Topic: Level up with loops
 Description: Write a program to check wheather a given number is an Armstrong number or not
 Date: 12-12-2025
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,digits=0,i=1,s=0,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
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
        if(s==num)
            printf("Armstrong Number");
        else
            printf("Not an Armstrong Number");
        printf("\n");
    return 0;
}