/*
Assignment: 36
Problem: 01
Topic: Strings
Description: Write a function to calculate the length of the string
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    int length(char []);
    char str[30]="mysirg education services";
    printf("Length: %d",length(str));
    printf("\n");
    return 0;
}

int length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return i;
}