/*
 Assignment: 05
 Problem: 04
 Topic: Functions in C++
 Description: Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
 Date: 14-01-2026
*/

#include<iostream>
using namespace std;
int main()
{
    int a=4,b=5;
    float c=4.5,d=2.8;
    cout<<"Max (integers): "<<max(a,b)<<endl;
    cout<<"Max (float): "<<max(c,d)<<endl;
    return 0;
}

float max(float x,float y)
{
    return x>y?x:y;
}

int max(int x,int y)
{
    return x>y?x:y;
}