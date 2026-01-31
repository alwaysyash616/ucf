/*
Assignment: 43
Problem: 04
Topic: Pointers
Description: Write a function to move first value of the array to the position where all smaller values will be in the left and greater values will be in the right.
Date: 02-01-2025
*/
#include<stdio.h>
int f4(int*,int);
int main()
{
    int a[6]={18,10,20,8,19,5},i;
    printf("Position: %d\n",f4(a,6));
    for(i=0;i<6;i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}

int f4(int *a,int size)
{
    int b[100]={},i,x=0,ans;
    for(i=1;i<size;i++)
        if(a[i]<a[0])
        {
            b[x]=a[i];
            x++;
        }
    b[x]=a[0];
    ans=x;
    x++;
    for(i=1;i<size;i++)
        if(a[0]<a[i])
        {
            b[x]=a[i];
            x++;
        }
    for(i=0;i<size;i++)
        a[i]=b[i];
    return ans;
}

/*
int sort(int A[],int size)
{
    int left,right,loc,temp;
    left=0;
    right=size-1;
    loc=0;
    while(left<right)
    {
        while(left<right&&A[loc]<A[right])
        {
            printf("Right: %d\n",right);
            right--;
        }
        if(left==right)
            break;
        A[right]=(A[loc]+A[right])-(A[loc]=A[right]);
        loc=right;
        printf("loc: %d",loc);
        while(left<right&&A[left]<A[loc])
        {
            printf("Left: %d\n",left);
            left++;
        }
        if(left==right)
            break;
        A[left]=(A[loc]+A[left])-(A[loc]=A[left]);
        loc=left;
        printf("loc: %d",loc);
    }
    return loc;
}
*/
/*
void sort(int *p,int size)
{
    int i,x=0;
    for(i=0;i<size;i++)
    {
        if(p[i]<p[x] && i>x)
        {
            p[x]=(p[i]+p[x])-(p[i]=p[x]);
            x=i;
        }
    }
    for(i=0;i<size;i++)
    {
        if(p[i]>p[x] && i<x)
        {
            p[x]=(p[x]+p[i])-(p[i]=p[x]);
            x=i;
        }
    }
}*/