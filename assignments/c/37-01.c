/*
Assignment: 37
Problem: 01
Topic: Strings and Functions
Description: Write a function to count vowels in a given string.
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="mysirg education services";
    int vowels(char []);
    printf("Vowels: %d",vowels(str));
    printf("\n");
    return 0;
}

int vowels(char s[])
{
    char v[]="aeiouAEIOU";
    int i,j,count=0;
    for(i=0;s[i];i++)
        for(j=0;v[j];j++)
            if(s[i]==v[j])
            {
                count++;
                break;
            }
    return count;
}