/*
 Assignment: 19
 Problem: 04
 Topic: switch case control
 Description: Write a menu driven program with the following options:
            1. Check wheather a given set of three numbers are lengths of an isoceles traingle or not
            2. Check wheather a given set of three numbers are lengths of sides of a right angled traingle or not
            3. Check wheather a given set of three numbers are equilateral traingle or not
            4. Exit
 Date: 14-12-2025
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,choice;
    char x;
    while(1)
    {
        system("clear");
        printf("1. Check Isoceles traingle or not?\n2. Check Right angled traingle or not?\n3. Check Equilateral traingle or not?\n4. Exit.\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter three numbers\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                {    
                    if(a==b || b==c || a==c)
                        printf("Isoceles Traingle\n"); 
                    else
                        printf("Not an Isoceles Traingle\n");           
                }
                else
                    printf("Invalid input\n");
                scanf(" %c",&x);
                break;
            case 2:
                printf("Enter three numbers\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                {    
                    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
                        printf("Right Angled Traingle\n");
                    else
                        printf("Not a Right Angled Traingle\n");          
                }
                else
                    printf("Invalid input\n");
                scanf(" %c",&x);
                break;
            case 3:
                printf("Enter three numbers\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                {
                    if(a==b && b==c)
                        printf("Equilateral Traingle\n");
                    else
                        printf("Not an Equilateral Traingle\n");
                }
                else
                    printf("Invalid input\n");
                scanf(" %c",&x);
                break;
            default:
                exit(0);        
        }
    }
    return 0;
}