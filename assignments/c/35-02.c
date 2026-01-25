/*
Assignment: 35
Problem: 02
Topic: String Basics
Description: Write a program to reverse a string
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[10]="computer";
    int l,i;
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
        str[l-1-i]=(str[i]+str[l-1-i])-(str[i]=str[l-1-i]);
    printf("%s",str);
    printf("\n");
    return 0;
}