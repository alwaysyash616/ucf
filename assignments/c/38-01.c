/*
Assignment: 38
Problem: 01
Topic: Strings and Functions
Description: Write a function to check wheather a given string is palindrome or not.
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char str[10]="1b2b1";
    int checkPalindrome(char[]);
    printf("%d",checkPalindrome(str));
    printf("\n");
    return 0;
}

int checkPalindrome(char c[])
{
    char s[10];
    int i,l;
    for(i=0;c[i];i++)
        s[i]=c[i];
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
        s[l-1-i]=(s[i]+s[l-1-i])-(s[i]=s[l-1-i]);
    for(i=0;s[i];i++)
        if(s[i]!=c[i])
            return 0;
    return 1;
}