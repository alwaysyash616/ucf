/*
Assignment: 44
Problem: 05
Topic: Structure
Description: Write a function to sort employees according to their names [ refer structure from question 1]
Date: 03-01-2025
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

struct Employee inputData();
void displayData(struct Employee);
void sortEmployees(struct Employee*,int);
int main()
{
    struct Employee e1[5];
    void sortEmployees(struct Employee*,int);
    int i;
    for(i=0;i<5;i++)
        e1[i]=inputData();
    system("clear");
    sortEmployees(e1,5);
    printf("\nSorted Employees:\n");
    for(i=0;i<5;i++)
    {
        printf("-------------------------\n");
        displayData(e1[i]);
    }
    printf("\n");
    return 0;
}

void sortEmployees(struct Employee *e,int size)
{
    int i,j;
    struct Employee tempEmp;
    for(i=1;i<size;i++)
        for(j=0;j<size-i;j++)
            if(strcmp(e[j].name,e[j+1].name)>0)
            {
                tempEmp=e[j];
                e[j]=e[j+1];
                e[j+1]=tempEmp;
            }
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