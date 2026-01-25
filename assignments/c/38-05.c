/*
Assignment: 38
Problem: 05
Topic: Strings and Functions
Description: Write a function to do case insensitive comparision of two strings.
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char str[10]="hello",s[10]="heLlO";
    int compare(char[],char[]);
    printf("%d",compare(str,s));
    printf("\n");
    return 0;
}

int compare(char a[],char b[])
{
    int i;
    char c[10];
    for(i=0;a[i];i++)
        if(a[i]>=97 && a[i]<=122)
            a[i]-=32;
    for(i=0;b[i];i++)
        if(b[i]>=97 && b[i]<=122)
            b[i]-=32;
    for(i=0;a[i];i++)
        if(a[i]!=b[i])    
            return a[i]-b[i];
    return 0;
}