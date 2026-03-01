/*
 Assignment: 13
 Problem: 02
 Topic: Operator Overloading
 Description: In Question-1, define an operator < to compare two fraction objects.
 Date: 24-01-2026
*/
#include<iostream>
using namespace std;
int lcm(int,int);
int hcf(int,int);
class fraction
{
    long numerator;
    long denominator;
    public:
        fraction(long n=0,long d=0)
        {
            numerator=n;
            denominator=d;
        }
        fraction operator +(fraction F)
        {
            fraction temp;
            int h;
            int l=denominator&&F.denominator?lcm(denominator,F.denominator):0;
            if(l)
            {
                temp.numerator=l/denominator*numerator+l/F.denominator*F.numerator;
                temp.denominator=l;
                h=hcf(temp.numerator,temp.denominator);
                temp.numerator/=h;
                temp.denominator/=h;
            }
            return temp;
        }
        bool operator <(fraction F)
        {
            int a,b;
            int l=denominator&&F.denominator?lcm(denominator,F.denominator):0;
            a=l/denominator*numerator;
            b=l/F.denominator*F.numerator;
            if(a<b)
                return true;
            else
                return false;
        }
        void printFraction()
        {
            cout<<numerator<<"/"<<denominator<<endl;
        }
};

int main()
{    
    fraction f1(1,4),f2(10,20),f3;
    f3=f1+f2; // f3=f1.operator +(f2);
    f3.printFraction();
    
    if(f1<f2)
        cout<<"f1 is less then f2";
    cout<<endl;
    return 0;
}

int lcm(int a,int b)
{
    int A[2],i=1;
    A[0]=a;
    A[1]=b;
    if(A[0]>A[1])
        A[1]=(A[0]+A[1])-(A[0]=A[1]);
    while(1)
    {
        if(A[1]*i%A[0]==0)
            return A[1]*i;
        i++;
    }
}
int hcf(int a,int b)
{
    int A[2],i;
    if(a==b)
        return a;
    else if(a<b)
    {
        A[0]=a;
        A[1]=b;
    }
    else
    {
        A[0]=b;
        A[1]=a;
    }
    i=A[0]-1;
    while(i>0)
    {
        if(A[0]%i==0&&A[1]%i==0)
        {
            return i;
        }
        i--;
    }
}