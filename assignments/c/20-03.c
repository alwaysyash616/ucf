/*
 Assignment: 20
 Problem: 03
 Topic: switch case control
 Description: Write a program to check wheather a given character is uppercase alphabet or lowercase alphabet or some other special character, using switch case statement.
 Date: 14-12-2025
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter characer: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 65 ... 90:
            printf("Uppercase\n");
            break;
        case 97 ... 122:
            printf("Lowercase\n");
            break;
        default:
            printf("Some other special character\n");
            break;
    }
    return 0;
}