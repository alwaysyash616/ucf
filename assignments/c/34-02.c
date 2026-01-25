/*
Assignment: 34
Problem: 02
Topic: String Basics
Description: Write a program to count the occurance of a given character in a given string.
Date: 25-12-2025
*/
#include<stdio.h>
int main()
{
    char ch,i,count=0,str[30]="mysirg education services";
    printf("Enter a character: ");
    scanf("%c",&ch);
    for(i=0;i<30;i++)
        if(str[i]==ch)
            count++;
    printf("Occurances or %c: %d",ch,count);
    printf("\n");
    return 0;
}