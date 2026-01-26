/*
Assignment: 39
Problem: 03
Topic: Strings and Functions
Description: Write a function to make first character of each word of the string capital
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
void capital(char[]);
int main()
{
    char str[30]="mysirg education services";
    capital(str);
    printf("%s",str);
    printf("\n");
    return 0;
}

void capital(char s[])
{
    int i,l=strlen(s);
    if(s[0]<=122 && s[0]>=97)
        s[0]-=32;
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
            if(s[i+1]<=122 && s[i+1]>=97)
                s[i+1]-=32;
    }
}