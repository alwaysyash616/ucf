/*
Assignment: 41
Problem: 02
Topic: Handling multiple strings
Description: Write a function to return the most repeating character in a list of strings.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
char frequent(char[][20],char[],char[],int[]);
void sort(char[]);
int main()
{
    char str[10][20]={"ibirmingham","mumbai","deoria","gorakhpur","edinburgh","philadelphia","manchester"};
    char temp[200],answer[26];
    int frequency[26],x;
    x=frequent(str,temp,answer,frequency);
    printf("%c is the most frequent character: %d times",answer[x],frequency[x]);
    printf("\n");
    return 0;
}

char frequent(char s[][20],char t[],char a[],int f[])
{
    int i,j,x=0,count=1;
    for(i=0;s[i][0];i++)
    {
        for(j=0;s[i][j];j++)
        {
            t[x]=s[i][j];
            x++;
        }
    }
    sort(t);
    x=0;
    for(i=0;t[i];i++)
    {
        if(t[i]==t[i+1])
            count++;
        else
        {
            a[x]=t[i];
            f[x]=count;
            x++;
            count=1;
        }
    }
    x=0;
    for(i=0;a[i];i++)
    {
        if(f[i]>f[x])
            x=i;
    }
    return x;
}

void sort(char t[])
{
    int i,j,l;
    l=strlen(t);
    for(i=1;i<l;i++)
    {
        for(j=0;j<l-i;j++)
        {
            if(t[j]>t[j+1])
                t[j]=(t[j]+t[j+1])-(t[j+1]=t[j]);
        }
    }
}