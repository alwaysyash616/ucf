/*
Assignment: 35
Problem: 01
Topic: String Basics
Description: Write a program to convert a given string into lowercase
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="MYSIRG EDUCATION SERVICES";
    int i;
    for(i=0;i<30;i++)
        if(str[i]>=65 && str[i]<=90)
            str[i]+=32;
    printf("%s",str);
    printf("\n");
    return 0;
}