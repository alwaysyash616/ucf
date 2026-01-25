/*
Assignment: 36
Problem: 02
Topic: Strings
Description: Write a function to reverse a string.
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="computer";
    void reverse(char []);
    reverse(str);
    printf("%s",str);
    printf("\n");
    return 0;
}

void reverse(char s[])
{
    int l,i;
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
        s[l-i-1]=(s[i]+s[l-i-1])-(s[i]=s[l-i-1]);
}