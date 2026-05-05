/*
 Assignment: 03
 Problem: 01
 Topic: array
 Description: Create an array object for int values of size 5. Print array elements from right to left using explicit iterator.
 Date: 02-03-2026
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5> a1={1,2,3,4,5};
    array<int,5>::reverse_iterator rit;
    rit=a1.rbegin();
    while (rit!=a1.rend())
    {
        cout<<*rit<<" ";
        rit++;
    }
    cout<<endl;
    return 0;
}