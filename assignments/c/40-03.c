/*
Assignment: 40
Problem: 03
Topic: Handling multiple strings
Description: Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char cities[10][20],temp[20];
    int i,j,l;
    printf("Enter 10 city names\n");
    for(i=0;i<10;i++)
    {
        fgets(cities[i],20,stdin);
        l=strlen(cities[i]);
        if(cities[i][l-1]=='\n')
            cities[i][l-1]='\0';
    }
    for(i=1;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(strcmp(cities[j],cities[j+1])>0)
            {
                strcpy(temp,cities[j]);
                strcpy(cities[j],cities[j+1]);
                strcpy(cities[j+1],temp);
            }
        }
    }
    printf("Sorted Strings:\n");
    for(i=0;i<10;i++)
        printf("%s\n",cities[i]);
    printf("\n");
    return 0;
}