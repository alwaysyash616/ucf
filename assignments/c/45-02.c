/*
Assignment: 45
Problem: 02
Topic: Structure
Description: Write a program to store information of 10 students and display them using structure.
Date: 03-01-2025
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
    int rollno,marks;
    char name[20];
};
void displayData(struct Student*,int);
struct Student inputData();
int main()
{
    struct Student s1[10];
    int i;
    for(i=0;i<10;i++)
        s1[i]=inputData();
    system("clear");
    printf("\n******Students Data******\n---------------------------\n");
    displayData(s1,10);
    printf("\n");
    return 0;
}

void displayData(struct Student *s,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Roll Number %d\n",(*(s+i)).rollno);
        printf("Name: %s\n",(s+i)->name);
        printf("Marks: %d\n",(*(s+i)).marks);
    }
}

struct Student inputData()
{
    int l;
    struct Student tempStudent;
    printf("Roll Number: ");
    scanf("%d",&tempStudent.rollno);
    getchar();
    printf("Name: ");
    fgets(tempStudent.name,20,stdin);
    l=strlen(tempStudent.name);
    if(tempStudent.name[l-1]=='\n')
        tempStudent.name[l-1]='\0';
    printf("Marks: ");
    scanf("%d",&tempStudent.marks);
    return tempStudent;
}