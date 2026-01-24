/*
 Assignment: 20
 Problem: 02
 Topic: switch case control
 Description: Write a menu driven program with the following options
 ====================
 1. Factorial of a number
 2. Check Even or Odd
 3. Area of circle
 4. Sum of first N natural numbers
 5. Exit
 =====================
 Date: 14-12-2025
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,n,f;
    printf("1. Factorial\n2. Check Even or Odd\n3. Area of Circle\n4. Sum of first N natural numbers\n5. Exit\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("Enter a number\n");
            scanf("%d",&n);
            f=n;
            while(n>=1)
            {   if(n>1) 
                    f=f*(n-1);
                n--;
            }
            printf("%d\n",f);
            break;
        case 2:
            printf("Enter a number\n");
            scanf("%d",&n);
            n&1==1?printf("Odd\n"):printf("Even\n");
            break;
        case 3:
            printf("Enter radius\n");
            scanf("%d",&n);
            printf("Area: %f\n",3.14*n*n);
            break;
        case 4:
            printf("Enter a number\n");
            scanf("%d",&n);
            printf("%d\n",(n*(n+1))/2);
            break;
        default:
            exit(0);
    }
    return 0;
}