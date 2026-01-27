/*
Assignment: 40
Problem: 04
Topic: Handling multiple strings
Description: Write a function to store each word a string in a 2 dimensional char array.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40]="mysirg education services pvt ltd",words[20][10];
    int i,l,x=0,y=0;
    l=strlen(str);
    str[l]=' ';
    // ------------------------
    for(i=0;i<20;i++)
        for(l=0;l<10;l++)
            words[i][l]='\0';
    // ------------------------
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
            words[x][i-y]=str[i];
        else
        {
            x++;
            y=i+1;
        }
    }
    printf("Words:\n-------\n");
    for(i=0;i<x;i++)
        printf("%d: %s\n",i,words[i]);
    printf("\n");
    return 0;
}