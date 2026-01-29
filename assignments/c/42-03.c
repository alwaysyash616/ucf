/*
Assignment: 42
Problem: 03
Topic: Pointers
Description: Write a function to convert a given string into uppercase.
Date: 01-01-2025
*/
#include<stdio.h>
void uppercase(char*);
int main()
{
    char str[30]="mysirg education services";
    uppercase(str);
    printf("%s",str);
    printf("\n");
    return 0;
}
void uppercase(char *s)
{
    int i;
    for(i=0;*(s+i);i++)
    {
        if(*(s+i)>=97 && *(s+i)<=122)
            *(s+i)-=32;
    }
}