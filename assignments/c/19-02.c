/*
 Assignment: 19
 Problem: 02
 Topic: switch case control
 Description: Write a menu driven program with the following options:
            1. Addition
            2. Subtraction
            3. Multiplication
            4. Division
            5. Exit
 Date: 14-12-2025
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    while(1)
    {
        printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Divison\n5. Exit\n");
        scanf("%d",&c);
        if(c!=5)
        {
            printf("Enter first number\t");
            scanf("%d",&a);
            printf("Enter second number\t");
            scanf("%d",&b);
        }
        switch(c)
        {
            case 1:
                system("clear");
                printf("Sum is %d\n",a+b);
                break;
            case 2:
                system("clear");
                printf("Difference is %d\n",a-b);
                break;        
            case 3:
                system("clear");
                printf("Product is %d\n",a*b);
                break;
            case 4:
                system("clear");
                printf("Division is %d\n",a/b);
                break;
            case 5:
                exit(0);
        }
        }
    return 0;
}