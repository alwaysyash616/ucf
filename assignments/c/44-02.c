/*
Assignment: 44
Problem: 02
Topic: Structure
Description: Write a function to input Employee data from the user. [ Refer structure from question 1 ]
Date: 03-01-2025
*/
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

struct Employee inputData();

int main()
{
    struct Employee e1;
    e1=inputData();
    return 0;
}

struct Employee inputData()
{
    int l;
    struct Employee e2;
    printf("Enter empid: ");
    scanf("%d",&e2.id);
    // fflush(stdin);                      // fflush is for output streams, undefined behaviour can be seen with stdin
    getchar();
    printf("Enter employee name: ");
    fgets(e2.name,20,stdin);
    l=strlen(e2.name);
    if(e2.name[l-1]=='\n')
        e2.name[l-1]='\0';
    printf("Enter salary: ");
    scanf("%f",&e2.salary);
    return e2;
}
