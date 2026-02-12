/*
 Assignment: 07
 Problem: 03
 Topic: More on Functions in C++
 Description: Define a function to print a substring from startIndex(inclusive) to endIndex(exclusive). Define function in such a way that if second argument is not provided, string will print till last possible index.
 Date: 14-01-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
void printSubString(char*,int,int=-1);
int main()
{
    char str[30]="mysirg education services";
    printSubString(str,2);
    cout<<endl;
    return 0;
}

void printSubString(char *p,int startIndex,int endIndex)
{
    if(endIndex==-1)
        endIndex=strlen(p);
    for(;startIndex<endIndex;startIndex++)
        cout<<p[startIndex];
}