/*
 Assignment: 33
 Problem: 02
 Topic: Multi-dimensional Arrays
 Description: Write a program to calculate the product of two matrices each of order 3x3.
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3]={},i,j,k;
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
            for(k=0;k<3;k++)
                C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
    printf("Product:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}