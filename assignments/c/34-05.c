/*
Assignment: 34
Problem: 05
Topic: String Basics
Description: Write a program to convert a given string into uppercase
Date: 25-12-2025
*/
#include<stdio.h>
int main()
{
    int i;
    char str[30]="mysirg education services";
    for(i=0;i<30;i++)
        if(str[i]>=97 && str[i]<=122)
            str[i]-=32;
    printf("%s",str);
    printf("\n");
    return 0;
}