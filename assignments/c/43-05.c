/*
Assignment: 43
Problem: 05
Topic: Pointers
Description: There are 5 classes with different number of students in them. Five arrays containing marks of students of each class. Write a function to recieve an address of an array of pointers to access marks of all the students. The job of function is to find the highest marks among all the classes.
Date: 02-01-2025
*/
#include<stdio.h>
int f5(int**,int,int[]);
int main()
{
    int c1[]={8,7,3,9,10},c2[]={1,4,6},c3[]={8,9,21,3},c4[]={2,4},c5[]={9,9,9},students[]={5,3,4,2,3};
    int *ptr[5]={c1,c2,c3,c4,c5};
    printf("Maximum: %d",f5(ptr,5,students));
    printf("\n");
    return 0;
}

int f5(int **p,int c,int s[])
{
    int i,j,max=**p;
    for(i=0;i<c;i++)
        for(j=0;j<s[i];j++)
            if(*(*(p+i)+j)>max)
                max=*(*(p+i)+j);
    return max;
}