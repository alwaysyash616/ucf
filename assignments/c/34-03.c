/*
Assignment: 34
Problem: 03
Topic: String Basics
Description: Write a program to count vowels in a given string
Date: 25-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="mysirg education services";
    int i,count=0;
    for(i=0;i<30;i++)
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
            count++;
    printf("Number of vowels: %d",count);
    printf("\n");
    return 0;
}