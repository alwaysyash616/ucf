/*
 Assignment: 06
 Problem: 02
 Topic: More on Functions in C++
 Description: Define a C++ function to sort an array of strings in ascending or descending order depending on bool type argument (true for ascending and false for descending). Use default argument to implement it.
 Date: 14-01-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
void sort(char(*)[10],int,bool=true);
int main()
{
    int i;
    char arr[5][10]={"Yash","Aman","Ykk","Radha","Akshay"};
    sort(arr,5);
    for(i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr,5,false);
    for(i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

void sort(char (*p)[10],int size,bool b)
{
    int i,j;
    char temp[20];
    if(b==true)
    {
        for(i=0;i<size-1;i++)
            for(j=0;j<size-1-i;j++)
            {
                if(strcmp(p[j],p[j+1])>0)
                {
                    strcpy(temp,p[j]);
                    strcpy(p[j],p[j+1]);
                    strcpy(p[j+1],temp);
                }
            }
    }
    else
    {
        for(i=0;i<size-1;i++)
            for(j=0;j<size-1-i;j++)
            {
                if(strcmp(p[j],p[j+1])<0)
                {
                    strcpy(temp,p[j]);
                    strcpy(p[j],p[j+1]);
                    strcpy(p[j+1],temp);
                }
            }

    }
}