/*
 Assignment: 23
 Problem: 01
 Topic: More on Functions
 Description: Write a function to calculate LCM of two numbers. (TSRS)
 Date: 18-12-2025
*/
#include<stdio.h>
int main()
{
    int a,b;
    int lcm(int,int);
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("LCM: %d\n",lcm(a,b));
    return 0;
}

int lcm(int x, int y)
{
    int i=1;
    if(x==0 || y==0)
        return 0;
    if(x<0)
        x=-x;
    if(y<0)
        y=-y;
    if(x==y)
        return x;
    else
    {
        if(x>y)
        {
            while(x*i%y)
                i++;
            return x*i;
        }
        else
        {
            while(y*i%x)
                i++;
            return y*i;
        }
    }
}