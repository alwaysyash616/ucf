/*
Assignment: 36
Problem: 03
Topic: Strings
Description: Write a function to compare two strings.
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[10]="abcdefgh",s[10]="abc";
    int compare(char[],char[]);
    printf("%d",compare(str,s));
    printf("\n");
    return 0;
}

int compare(char a[],char b[])
{
    int i;
    for(i=0;a[i];i++)
        if(a[i]!=b[i])
            return a[i]-b[i];
    return a[i]-b[i];
}