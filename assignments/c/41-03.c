/*
Assignment: 41
Problem: 03
Topic: Handling multiple strings
Description: Write a function to check wheather a pair of strings are anagram or not. Both the strings are stored in a 2d char array.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
int anagram(char[],char[]);
void sort(char[]);
int main()
{
    char str[2][30]={"traingle","integral"};
    printf("%s",anagram(str[0],str[1])?"anagram":"not anagram");
    printf("\n");
    return 0;
}
int anagram(char a[],char b[])
{
    char temp1[30],temp2[30];
    strcpy(temp1,a);
    strcpy(temp2,b);
    sort(temp1);
    sort(temp2);
    if(!strcmp(temp1,temp2))
        return 1;
    return 0;
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