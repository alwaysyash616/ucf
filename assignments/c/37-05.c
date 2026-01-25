/*
Assignment: 37
Problem: 05
Topic: Strings and Functions
Description: Write a function to check wheather a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="zoom169speedster";
    int checkAlphanumeric(char[]);
    printf("%d",checkAlphanumeric(str));
    printf("\n");
    return 0;
}

int checkAlphanumeric(char c[])
{
    int a=0,d=0,i;
    for(i=0;c[i];i++)
    {
        if((c[i]>=65 && c[i]<=90) || (c[i]>=97 && c[i]<=122))
            a++;
        else if(c[i]>=48 && c[i]<=57)
            d++;
    }
    if(a>0 && d>0)
        return 1;
    else
        return 0;
}