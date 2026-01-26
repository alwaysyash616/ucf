/*
Assignment: 39
Problem: 04
Topic: Strings and Functions
Description: Write a function to make acronym name from a given name. For Example, "Ramesh Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
void makeAcronym(char[],char[]);
int main()
{
    char str[]="Babu Singh Kushwaha";
    char acronym[100];
    // int i;
    // for(i=0;i<100;i++)
    //     printf("%c ",acronym[i]);
    makeAcronym(str,acronym);
    printf("%s",acronym);
    printf("\n");
    return 0;
}

void makeAcronym(char s[],char temp[])
{
    int x=1,i,l;
    temp[0]=s[0];
    for(i=0;s[i];i++)
    {
        if(s[i]==' ')
        {
            temp[x]=s[i+1];
            x++;
        }
    }
    temp[x-1]=' ';
    l=strlen(s);
    for(i=l;s[i]!=' ';i--);
    for(i+=1;s[i];i++)
    {
        temp[x]=s[i];
        x++;
    }
    temp[x]='\0';
}