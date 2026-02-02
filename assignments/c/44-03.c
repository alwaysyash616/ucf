/*
Assignment: 44
Problem: 03
Topic: Structure
Description: Write a function to display Employee data. [ Refer structure from question 1 ]
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
void displayData(struct Employee);
int main()
{
    struct Employee e1;
    e1=inputData();
    printf("########################\n");
    displayData(e1);
    printf("\n");
    return 0;
}

void displayData(struct Employee e2)
{
    printf("Employee ID: %d\n",e2.id);
    printf("Employee name: %s\n",e2.name);
    printf("Employee salary: %f\n",e2.salary);
}

struct Employee inputData()
{
    int l;
    struct Employee e2;
    printf("Enter empid: ");
    scanf("%d",&e2.id);
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