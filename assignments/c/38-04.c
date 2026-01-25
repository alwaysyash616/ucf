/*
Assignment: 38
Problem: 04
Topic: Strings and Functions
Description: Write a function to reverse a string word wise. (For example if the given string is "Mysirg Education Services" then the resulting string should be "Services Education Mysirg")
Date: 27-12-2025
*/
#include<stdio.h>
int main()
{
    char str[30]="jp morgan chase and co";
    void reverse(char[]);
    int i;
    reverse(str);
    printf("%s",str);
    // for(i=0;str[i];i++)
    //     printf("%c %d\n",str[i],str[i]);
    printf("\n");
    return 0;
}

void reverse(char s[])
{
    int x=0,l,i;
    for(l=0;s[l];l++);
    s[l]=' ';
    do
    {
        for(l=x;s[l]!=' ';l++);
        for(i=x;i<x+(l-x)/2;i++)
            s[l-1-i+x]=(s[i]+s[l-1-i+x])-(s[i]=s[l-1-i+x]);
        x=l+1;
    }while(s[x]);
    for(l=0;s[l];l++);
    s[--l]='\0';
    for(i=0;i<l/2;i++)
        s[l-1-i]=(s[i]+s[l-1-i])-(s[i]=s[l-1-i]);
}