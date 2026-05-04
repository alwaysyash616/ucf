/*
 Assignment: 01
 Problem: 01
 Topic: Template Function
 Description: Define a function template which takes two arguments of same type and return the greater value.
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
X findMax(X a,X b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<findMax(3,4);
    cout<<endl;
    return 0;
}