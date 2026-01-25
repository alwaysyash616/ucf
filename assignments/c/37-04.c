/*
Assignment: 37
Problem: 04
Topic: Strings and Functions
Description: Write a function to swap two characters of a given string with specified indices.
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="mysirg education services";
    void swap(int,int,char[]);
    int p,q;
    printf("Specify indices to swap values\n");
    scanf("%d%d",&p,&q);
    swap(p,q,str);
    printf("%s",str);
    printf("\n");
    return 0;
}

void swap(int a,int b,char c[])
{
    c[b]=(c[a]+c[b])-(c[a]=c[b]);
}