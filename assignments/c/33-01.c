/*
 Assignment: 33
 Problem: 01
 Topic: Multi-dimensional Arrays
 Description: Write a program to calculate the sum of two matrices of order 3x3.
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter 9 numbers for I matrix\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    printf("Enter 9 numbers for II matrix\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            C[i][j]=A[i][j]+B[i][j];
    printf("Sum:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}