/*
Assignment: 34
Problem: 01
Topic: String Basics
Description: Write a program to calculate the length of the string. (without using the builtin method)
Date: 25-12-2025
*/
#include<stdio.h>
int main()
{
    char str[20]="Yash Kushwaha";
    int i;
    for(i=0;str[i];i++);
    printf("Length: %d",i);
    printf("\n");
    return 0;
}