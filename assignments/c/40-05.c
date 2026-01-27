/*
Assignment: 40
Problem: 05
Topic: Handling multiple strings
Description: Write a function to remove duplicate names stored in the list of names stored in a 2d char array.
Date: 28-12-2025
*/
#include<stdio.h>
#include<string.h>
void delete(char [][10],int,int);
void removeDuplicates(char [][10],int);
int main()
{
    char names[8][10]={"Delhi","Vapi","Vapi","Surat","Mumbai","Vapi","Mumbai","Surat"};
    int i;
    // delete(names,4,5);
    removeDuplicates(names,8);
    for(i=0;i<5;i++)
        printf("%s\n",names[i]);
    return 0;
}

void removeDuplicates(char n[][10],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(!strcmp(n[i],n[j]))
            {
                delete(n,j,size);
                continue;
            }
        }
    }
}

void delete(char n[][10],int position,int size)
{
    int i;
    if(position==size-1)
        strcpy(n[position],"");
    else
    {
        for(i=position;i<size-1;i++)
        {
            strcpy(n[i],n[i+1]);
        }
    }
    strcpy(n[size-1],"");
}