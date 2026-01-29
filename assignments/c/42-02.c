/*
Assignment: 42
Problem: 02
Topic: Pointers
Description: Write a function to search all occurances of a given character in a given string. Result of search is a list of indices to be stored in the given array. [ void search_all_occurances(char *str, char ch, int *arr);]
Date: 01-01-2025
*/
#include<stdio.h>
void search_all_occurances(char*,char,int*);
int main()
{
    char str[30]="mysirg education services",ch;
    int arr[30]={},i;
    printf("Enter character to search in %s\n",str);
    scanf("%c",&ch);
    search_all_occurances(str,ch,arr);
    for(i=0;arr[i];i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

void search_all_occurances(char *str,char ch,int *arr)
{
    int i,x;
    for(i=0,x=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[x]=i;
            x++;
        }
    }
}