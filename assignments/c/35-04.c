/*
Assignment: 35
Problem: 04
Topic: String Basics
Description: Write a program in C to copy one string to another char array.
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[10]="computer",s[10];
    int i;
    for(i=0;i<10;i++)
        s[i]=str[i];
    printf("%s",s);
    printf("\n");
    return 0;
}