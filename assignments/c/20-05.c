/*
 Assignment: 20
 Problem: 05
 Topic: switch case control
 Description: Write a menu driven program with the following options:
            1. Calculate LCM of two numbers
            2. Calculate sum of the digits of a number
            3. Volume of cuboid
            4. Check wheather a given number is Prime or not
            5. Exit
 Date: 14-12-2025
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b=0,c,i=1;
    while(1)
    {
        printf("Press ENTER to proceed.\n");
        while((a=getchar())!='\n' && a != EOF);
        getchar();
        system("clear");
        
        printf("1. Calculate LCM of two numbers\n");
        printf("2. Calculate sum of digits of a number\n");
        printf("3. Volume of a cuboid\n");
        printf("4. Check weather a given number is Prime or not\n");
        printf("5. Exit\n\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter two numbers\n");
                scanf("%d%d",&a,&b);
                if(a==b)
                    printf("LCM: %d\n",a);
                else
                {
                    if(a>b)
                    {   
                        while(a*i%b!=0)
                            i++;
                        printf("LCM: %d\n",a*i);
                    }
                    else
                    {
                        while(b*i%a!=0)
                            i++;
                        printf("LCM: %d\n",b*i);
                    }
                }
                break;
            case 2:
                printf("Enter a number\n");
                scanf("%d",&a);
                while(a)
                {
                    b+=a%10;
                    a/=10;
                }
                printf("Sum of digits: %d\n",b);
                break;
            case 3:
                printf("Enter three numbers\n");
                scanf("%d%d%d",&a,&b,&c);
                printf("Volume of cuboid: %f\n",a*b*c*1.0);
                break;
            case 4:
                printf("Enter a number\n");
                scanf("%d",&a);
                for(i=2;i<a;i++)
                {
                    if(a%i==0)
                        break;
                }
                if(i==a)
                    printf("Prime\n");
                else
                    printf("Not Prime\n");
                break;
            case 5:
                printf("Exit\n");
                exit(0);
            default:
                printf("Invalid Input\n");
        }
    }
    return 0;
}