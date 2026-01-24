/*
 Assignment: 20
 Problem: 01
 Topic: switch case control
 Description: Write a program to find and display grade obtained by a student in a test. Grading specifications are as follows:
 ====================
 - Marks from 90 to 100: Grade A
 - Marks from 80 to less then 90: Grade B
 - Marks from 70 to less then 80: Grade C
 - Marks from 60 to less then 70: Grade D
 - Marks from 50 to less then 60: Grade E
 - Marks below 50: Grade F
 - Marks greater then 100 or less then 0: Invalid Marks
 =====================
 Date: 14-12-2025
*/
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks\n");
    scanf("%d",&marks);
    if(marks>100 || marks<0)
        printf("Invalid Marks\n");
    else if(marks>=90 && marks<=100)
        printf("Grade A\n");
    else if(marks>=80)
        printf("Grade B\n");
    else if(marks>=70)
        printf("Grade C\n");
    else if(marks>=60)
        printf("Grade D\n");
    else if(marks>=50)
        printf("Grade E\n");
    else
        printf("Grade F\n");
    return 0;
}