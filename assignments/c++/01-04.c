/*
 Assignment: 01
 Problem: 04
 Topic: Revisiting C Language
 Description: Write a C function to calculate LCM of two numbers (TSRS)
 Date: 10-01-2026
*/
#include<stdio.h>
int main()
{
    int a,b;
    int lcm(int,int);
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("lcm: %d",lcm(a,b));
    printf("\n");
    return 0;
}

int lcm(int a,int b)
{
    int i=1;
    if(a==b)
        return a;
    else if(a>b)
        while(1)
        {
            if(a*i%b==0)
                return a*i;
            i++;
        }
    else
        while(1)
        {
            if(b*i%a==0)
                return b*i;
            i++;
        }
                
}