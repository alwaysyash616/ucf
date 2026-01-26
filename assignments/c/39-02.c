/*
Assignment: 39
Problem: 02
Topic: Strings and Functions
Description: Write a function to find a word in a given string.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
int find(char[],char[]);
int main()
{
    char str[30]="function to find a word",word[10]="sword";
    printf("%d",find(word,str));
    printf("\n");
    return 0;
}

int find(char w[],char s[])
{
    char temp[100];
    int i,j,x=0,result,l=strlen(s);
    s[l]=' ';
    l++;
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
            temp[i-x]=s[i];
        else
        {
            temp[i-x]='\0';
            result=strcmp(w,temp);
            if(result==0)
                return 1;
            else
            {
                for(j=0;j<100;j++)
                    temp[j]='\0';
                x=i+1;
            }
        }
    }
    return 0;
}