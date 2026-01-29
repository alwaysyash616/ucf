/*
Assignment: 41
Problem: 04
Topic: Handling multiple strings
Description: Write a function to store all the words in a given string which are starting from 'a', in a two dimensional char array.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
void a(char[][20],char[]);
int main()
{
    char array[10][20],str[100]="which are coming america starting from apple";
    int i;
    for(i=0;i<array[i][0];i++)
        printf("%s\n",array[i]);
    printf("\n");
    return 0;
}

void a(char array[][20],char str[])
{
    int i,j,x=0,y,descision=0;
    char temp[100];
    for(i=0;str[i];i++)
    {
        if(i==0 && str[i]=='a')
            descision=1;
        else 
        {
            if(str[i-1]==' ' && str[i]=='a')
                descision=1;
            if(str[i]==' ')
                descision=0;
        }
        if(descision==1)
        {
            array[x][i-y]=str[i];
        }
        if(str[i]==' ')
        {
            x++;
            y=i+1;
        }
    }
}