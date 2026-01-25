/*
Assignment: 36
Problem: 05
Topic: Strings
Description: Write a function to transform a string into lowercase
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="MYSIRG EDUCATION SERVICES";
    void lowercase(char []);
    lowercase(str);
    printf("%s",str);
    printf("\n");
    return 0;
}

void lowercase(char s[])
{
    int i;
    for(i=0;s[i];i++)
        if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
}