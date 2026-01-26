/*
Assignment: 39
Problem: 01
Topic: Strings and Functions
Description: Write a function to count frequency of each character of the given string.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
void sort(char[]);
void freq(char[]);
int main()
{
    char str[30]="jpmorgan chase and co";
    freq(str);
    printf("\n");
    return 0;
}

void freq(char s[])
{
    int i,count=1;
    char temp[100];
    strcpy(temp,s);
    sort(temp);
    for(i=0;temp[i];i++)
    {
        if(temp[i]==temp[i+1])
            count++;
        else
        {
            printf("%c %d\n",temp[i],count);
            count=1;
        }
    }
}

void sort(char s[])
{
    int n,i,j,k=0;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            if(s[j]>s[k])
                k=j;
        if(i!=n-1)
        {
            s[k]=(s[n-1-i]+s[k])-(s[n-1-i]=s[k]);
            k=0;
        }
    }
}