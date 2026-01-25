/*
Assignment: 37
Problem: 03
Topic: Strings and Functions
Description: Write a function to find a character in a given string between specified indices (start index (inclusive) and end index (exclusive)).
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char ch,str[30]="mysirg education services";
    int findCharacter(int,int,char,char[]);
    int p,q;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("Enter indices to search between\n");
    scanf("%d%d",&p,&q);
    printf("Index: %d",findCharacter(p,q,ch,str));
    printf("\n");
    return 0;
}

int findCharacter(int a,int b,char c,char s[])
{
    for(;a<b;a++)
        if(s[a]==c)
            return a;
    return -1;
}