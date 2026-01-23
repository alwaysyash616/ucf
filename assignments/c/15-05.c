/*
 Assignment: 15
 Problem: 05
 Topic: Level up with loops
 Description: Write a program to check wheather two given numbers are co-prime numbers or not
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
            if(g==1)
                printf("co-prime\n");
            else
                printf("not co-prime\n");
            break;
        }
        g--;
    }
    return 0;
}