/*
Assignment: 36
Problem: 04
Topic: Strings
Description: Write a function to transform string into uppercase
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="mysirg education services";
    void uppercase(char []);
    uppercase(str);
    printf("%s",str);
    printf("\n");
    return 0;
}

void uppercase(char s[])
{
    int i;
    for(i=0;s[i];i++)
        if(s[i]>=97 && s[i]<=122)
            s[i]-=32;
}