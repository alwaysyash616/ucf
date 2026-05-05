/*
 Assignment: 03
 Problem: 05
 Topic: array
 Description: Create an array object for int type values of size 10. Initialise it with some values. Now sort array elements.
 Date: 02-03-2026
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    int temp;
    array <int,10> a1={56,88,-3,9,-10,90,1,-100,100,50};
    array<int,10>::iterator it;
    for(int i=1;i<=a1.size()-1;i++)
        for(it=a1.begin();it!=a1.end()-i;it++)
        {
            if((*it)>*(it+1))
            {
                temp=*it;
                *it=*(it+1);
                *(it+1)=temp;
            }
        }
    for(it=a1.begin();it!=a1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}