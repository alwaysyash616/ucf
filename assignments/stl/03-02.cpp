/*
 Assignment: 03
 Problem: 02
 Topic: array
 Description: Create an array object for float values of size 5. Calculate average of numbers and display it.
 Date: 02-03-2026
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    float sum=0;
    array <float,5> a1={1.1,2.2,3.3,4.4,5.5};
    array<float,5>::iterator it;
    it=a1.begin();
    while (it!=a1.end())
    {
        sum+=*it;
        it++;
    }
    cout<<sum/a1.size();
    cout<<endl;
    return 0;
}