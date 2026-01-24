/*
 Assignment: 19
 Problem: 01
 Topic: switch case control
 Description: Write a program which takes the month number as an input and display number of days in that month.
 Date: 14-12-2025
*/
#include<stdio.h>
int main()
{
    int m;
    printf("Enter month number");
    scanf("%d",&m);
    switch(m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30\n");
            break;
        case 2:
            printf("28 or 29\n");
            break;
        default:
            printf("Invalid Input\n");
    }
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int m;
    printf("Enter month number");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
            printf("31\n");
            break;
        case 2:
            printf("28 or 29\n");
            break;
        case 3:
            printf("31\n");        
            break;
        case 4:
            printf("30\n");
            break;
        case 5:
            printf("31\n");
            break;
        case 6:
            printf("30\n");
            break;
        case 7:
            printf("31\n");
            break;
        case 8:
            printf("31\n");
            break;
        case 9:
            printf("30\n");
            break;
        case 10:
            printf("31\n");
            break;
        case 11:
            printf("30\n");
            break;
        case 12:
            printf("31\n"); 
            break;       
        default:
            printf("Invalid Input");
    }
    return 0;
}
*/