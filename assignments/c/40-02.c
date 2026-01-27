/*
Assignment: 40
Problem: 02
Topic: Handling multiple strings
Description: Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from user.
Date: 28-12-2025
*/
#include<stdio.h>
int main()
{
    char str[5][20],vowels[]="aeiouAEIOU";
    int i,j,l,count=0;
    printf("Enter your village, sub-district, district, state, country\n");
    for(i=0;i<5;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        if(str[i][l-1]=='\n')
            str[i][l-1]='\0';
    }
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j];j++)
        {
            for(l=0;vowels[l];l++)
                if(vowels[l]==str[i][j])
                {
                    count++;
                    break;
                }
        }
        printf("Number of vowels in %s is %d\n",str[i],count);
        count=0;
    }
    printf("\n");
    return 0;
}