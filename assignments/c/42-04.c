/*
Assignment: 42
Problem: 04
Topic: Pointers
Description: Write a function to convert a given string into lowercase.
Date: 01-01-2025
*/
#include<stdio.h>
void lowercase(char*);
int main()
{
    char str[30]="MYSIRG EDUCATION SERVICES";
    lowercase(str);
    printf("%s",str);
    printf("\n");
    return 0;
}
void lowercase(char *s)
{
    int i;
    for(i=0;*(s+i);i++)
    {
        if(*(s+i)>=65 && *(s+i)<=90)
            *(s+i)+=32;
    }
}