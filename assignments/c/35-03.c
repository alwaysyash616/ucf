/*
Assignment: 35
Problem: 03
Topic: String Basics
Description: Write a program in C to count the total number of alphabets, digits and special characters in a string.
Date: 26-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="$52fserab ABK!@*(&";
    int alphabets=0,digits=0,special_ch=0,i;
    for(i=0;i<30;i++)
    {
        if((str[i]>=97 && str[i]<=122) || (str[i]>=65 && str[i]<=90))
            alphabets++;
        else if(str[i]>=48 && str[i]<=57)
            digits++;
        else
            if(str[i]!=' ' && str[i])
                special_ch++;
    }
    printf("Alphabets: %d\nDigits: %d\nSpecial Characters: %d",alphabets,digits,special_ch);
    printf("\n");
    return 0;
}