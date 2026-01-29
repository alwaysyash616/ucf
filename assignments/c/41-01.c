/*
Assignment: 41
Problem: 01
Topic: Handling multiple strings
Description: Write a program to find words ending with a letter 's' and store each such word in a 2d char array.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="hello Queens Burger Peoples crook stdio",words[10][20];
    int l,i,j,x=0,y;
    l=strlen(str);
    str[l]=' ';
    for(i=0;i<10;i++)
        for(j=0;j<20;j++)
            words[i][j]='\0';

    for(i=0;str[i];i++)
    {
        if(str[i]==' ' && str[i-1]=='s')
        {
            for(j=i;j>0 && str[j-1]!=' ';j--);
            y=j;
            for(;str[j]!=' ';j++)
            {
                words[x][j-y]=str[j];
            }
            x++;
        }
    }
    printf("Words ending with 's': ");
    for(i=0;i<x;i++)
        printf("\n%s",words[i]);
    printf("\n");
    return 0;
}