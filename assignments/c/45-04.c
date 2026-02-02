/*
Assignment: 45
Problem: 04
Topic: Structure
Description: Write a program to enter marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
Date: 03-01-2025
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Marks
{
    int rollno,chem_marks,maths_marks,phy_marks;
    char name[20];
};
void displayPercentage(struct Marks*,int);
struct Marks inputData();
int main()
{
    struct Marks m1[5];
    int i;
    for(i=0;i<5;i++)
        m1[i]=inputData();
    system("clear");
    displayPercentage(m1,5);
    printf("\n");
    return 0;
}

void displayPercentage(struct Marks *m,int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("Roll no: %d  Name: %s  Percentage: %f\n",(*(m+i)).rollno,(*(m+i)).name,((*(m+i)).maths_marks+(*(m+i)).phy_marks+(*(m+i)).chem_marks)/3.0);
}

struct Marks inputData()
{
    struct Marks m;
    int l;
    printf("Enter RollNo: ");
    scanf("%d",&m.rollno);
    getchar();
    printf("Name: ");
    fgets(m.name,20,stdin);
    l=strlen(m.name);
    if(m.name[l-1]=='\n')
        m.name[l-1]='\0';
    printf("Marks in Chemistry: ");
    scanf("%d",&m.chem_marks);
    printf("Marks in Physics: ");
    scanf("%d",&m.phy_marks);
    printf("Marks in Maths: ");
    scanf("%d",&m.maths_marks);
    return m;
}