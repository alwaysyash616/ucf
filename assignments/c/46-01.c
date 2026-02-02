/*
Assignment: 46
Problem: 01
Topic: DMA
Description: Define a function to input variable length string and store it in an array without memory wastage.
Date: 06-01-2025
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* input();
int main()
{
    char *s1;
    s1=input();
    printf("%s",s1);
    printf("\n");
    return 0;
}

char* input()
{
    int l;
    char *p,*q;
    p=malloc(100);
    fgets(p,100,stdin);
    l=strlen(p);
    if(p[l-1]=='\n')
        p[l-1]='\0';
    l=strlen(p);
    q=malloc(l+1);
    strcpy(q,p);
    free(p);
    return q;
}