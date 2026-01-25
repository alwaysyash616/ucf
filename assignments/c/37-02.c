/*
Assignment: 37
Problem: 02
Topic: Strings and Functions
Description: Write a function to find a character in a given string. Return index of first occurance of given character. Return -1 if character not found.
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char ch,str[30]="mysirg education services";
    int findCharacter(char,char[]);
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("Index: %d",findCharacter(ch,str));
    printf("\n");
    return 0;
}

int findCharacter(char c,char s[])
{
    int i;
    for(i=0;s[i];i++)
        if(s[i]==c)
            return i;
    return -1;
}