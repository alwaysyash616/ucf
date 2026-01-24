/*
 Assignment: 20
 Problem: 04
 Topic: switch case control
 Description: Write a program to check wheather a given character is vowel or consonent or some other special character, using switch case statement.
 Date: 14-12-2025
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("vowel\n");
            break;
        case 'b' ... 'd': case 'B' ... 'D':
        case 'f' ... 'h': case 'F' ... 'H':
        case 'j' ... 'n': case 'J' ... 'N':
        case 'p' ... 't': case 'P' ... 'T':
        case 'v' ... 'z': case 'V' ... 'Z':
            printf("consonent\n");
            break;
        default:
            printf("some other special character\n");
    }
    return 0;
}