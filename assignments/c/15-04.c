/*
 Assignment: 15
 Problem: 04
 Topic: Level up with loops
 Description: Write a program to calculate HCF of two numbers
 Date: 12-12-2025
*/
#include<stdio.h>
int main()
{
    int x,y,g;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    g=x>y?x:y;
    while(g>=1)
    {
        if(x%g==0 && y%g==0)
        {
            printf("HCF: %d\n",g);
            break;
        }
        g--;
    }
    return 0;
}