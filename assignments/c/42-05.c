/*
Assignment: 42
Problem: 05
Topic: Pointers
Description: Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive), and store the extracted string in another char array. [void extract_substring(char *str,int start_index,int end_index,char *result);]
Date: 01-01-2025
*/
#include<stdio.h>
void extract_substring(char*,int,int,char*);
int main()
{
    int a,b;
    char s[30]="mysirg education services",r[30];
    printf("Enter start and end index's\n");
    scanf("%d%d",&a,&b);
    extract_substring(s,a,b,r);
    printf("%s",r);
    printf("\n");
    return 0;
}

void extract_substring(char *str,int start_index,int end_index,char *result)
{
    int i,x;
    for(i=start_index,x=0;i<end_index;i++)
    {
        *(result+x)=*(str+i);
        x++;
    }
}