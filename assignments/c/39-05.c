/*
Assignment: 39
Problem: 05
Topic: Strings and Functions
Description: Write a function to concatenate two strings
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
void concat(char[],char[],char[]);
int main()
{
    char str1[10]="mysirg",str2[30]=" education services",result[100];
    concat(str1,str2,result);
    printf("%s",result);
    printf("\n");
    return 0;
}

void concat(char s1[],char s2[],char r[])
{
    int i,l;
    for(i=0;s1[i];i++)
        r[i]=s1[i];
    l=strlen(r);
    for(i=l;s2[i-l];i++)
        r[i]=s2[i-l];
}