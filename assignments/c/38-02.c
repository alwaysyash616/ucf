/*
Assignment: 38
Problem: 02
Topic: Strings and Functions
Description: Write a function to trim a string (removing leading spaces from both ends).
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char str[20]="  alwaysyash   ";
    void trim(char[],int);
    int i;
    printf("%s\n",str);
    trim(str,20);
    printf("%s",str);
    printf("\n");
    return 0;
}
void trim(char s[],int size)
{
    int i,x=0;
    for(i=0;i<size;i++)
        if(s[i]!=' ')
        {
            s[x]=s[i];
            s[i]='\0';
            x++;
        }
        else
            s[i]='\0';
}