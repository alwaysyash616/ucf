/*
Assignment: 34
Problem: 04
Topic: String Basics
Description: Write a program to count spaces in a given string
Date: 25-12-2025
*/
#include<stdio.h>
int main()
{
    int i,count=0;
    char str[30]="mysirg education services";
    for(i=0;i<30;i++)
        if(str[i]==' ')
            count++;
    printf("Number of spaces: %d",count);
    printf("\n");
    return 0;
}