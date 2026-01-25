/*
Assignment: 35
Problem: 05
Topic: String Basics
Description: Write a program to find first occurance of a given character in a given string.
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[10]="computer",ch;
    int i;
    printf("Enter a character: ");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            printf("First occurance of %c: %d",ch,i);
            break;
        }
    }
    printf("\n");
    return 0;
}