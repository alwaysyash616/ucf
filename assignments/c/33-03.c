/*
 Assignment: 33
 Problem: 03
 Topic: Multi-dimensional Arrays
 Description: Write a program to print the transpose of a given matrix.
 Date: 23-12-2025
*/
#include<stdio.h>
int main()
{
    int A[3][3],i,j;
    printf("Enter 9 numbers for the matrix\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    printf("Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",A[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(i<j)
                A[j][i]=(A[i][j]+A[j][i])-(A[i][j]=A[j][i]);
    printf("Transpose:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",A[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}