/*
Assignment: 40
Problem: 01
Topic: Handling multiple strings
Description: Write a function to store strings, taken from user, to the given 2d char array.
Date: 28-12-2025
*/
#include<stdio.h>
int main()
{
    char str[4][20];
    int i,l;
    printf("Enter your village, sub-district, district, state\n");
    for(i=0;i<4;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        if(str[i][l-1]=='\n')
            str[i][l-1]='\0';
    }
    for(i=0;i<4;i++)
        printf("%s\n",str[i]);
    printf("\n");
    return 0;
}