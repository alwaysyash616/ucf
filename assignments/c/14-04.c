/*
 Assignment: 14
 Problem: 04
 Topic: Use any loop
 Description: Write a program to calculate LCM of two numbers
 Date: 11-12-2025
*/
#include<stdio.h>
int main()
{
    int x,y,greater,i=1;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    greater=x>y?x:y;
    while(1)
    {
        if(greater*i%x==0 && greater*i%y==0)
            break;
        i++;
    }
    printf("LCM: %d",greater*i);
    printf("\n");
    return 0;
}