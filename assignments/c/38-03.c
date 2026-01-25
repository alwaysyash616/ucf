/*
Assignment: 38
Problem: 03
Topic: Strings and Functions
Description: Write a function to count words in a given string
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="mysirg education services";
    int words(char[]);
    printf("Number of words: %d",words(str));
    printf("\n");
    return 0;
}

int words(char c[])
{
    int i,count=0;
    for(i=0;c[i];i++)
        if(c[i]==' ')
            count++;
    return count+1;
}