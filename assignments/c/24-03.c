/*
 Assignment: 24
 Problem: 03
 Topic: More on Functions
 Description: Write a function to print PASCAL Traingle. (TSRN)
 Date: 18-12-2025
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    void pascal(int);
    printf("Enter a number: ");
    scanf("%d",&n);
    pascal(n);
    printf("\n");
    return 0;
}

int ncr(int n,int r)
{
    // n!/(n-r)!r!
    return tgamma(n+1)/(tgamma(n-r+1)*tgamma(r+1));
}

void pascal(int n)
{
    int i,j,k=0,descision=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(j>=n+1-i && j<=n-1+i && descision==1)
            {
                printf("%d",ncr(i-1,k));
                k++;
            }
            else
                printf(" ");
            if(j>=n+1-i && j<n-1+i)
                descision=descision==1?0:1;
        }
        k=0;
        printf("\n");
    }
}