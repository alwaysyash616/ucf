/*
 Assignment: 01
 Problem: 02
 Topic: Template Function
 Description: Define a function template which takes two arguments of same type and return the smaller value.
 Date: 01-03-2026
*/
#include<iostream>
using namespace std;
template <typename X>
X findMin(X a,X b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    cout<<findMin(3,4);
    cout<<endl;
    return 0;
}