/*
Assignment: 43
Problem: 01
Topic: Pointers
Description: Write a function to swap strings of two char arrays.
Date: 02-01-2025
*/
#include<stdio.h>
#include<string.h>
void swapStrings(char[],char[]);
int main()
{
    char s1[20]="alwaysyash",s2[20]="616";
    swapStrings(s1,s2);
    printf("%s\n%s",s1,s2);
    printf("\n");
    return 0;
}

void swapStrings(char str1[],char str2[])
{
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}