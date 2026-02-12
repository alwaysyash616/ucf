/*
 Assignment: 06
 Problem: 04
 Topic: More on Functions in C++
 Description: Define a function to calculate LCM of three numbers.
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
int lcm(int,int,int);
int main()
{
    int x,y,z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    cout<<"LCM: "<<lcm(x,y,z);
    cout<<endl;
    return 0;
}

int lcm(int u,int v,int w)
{
    int a[3]={u,v,w};
    int i;
    for(i=0;i<2;i++)
        if(a[i]>a[i+1])
            a[i]=(a[i]+a[i+1])-(a[i+1]=a[i]);
    for(i=1;i;i++)
        if(a[2]*i%a[0]==0 && a[2]*i%a[1]==0)
            return a[2]*i;
}   

/*
ucf (main) ➜ g++ -std=c++17 -o 06-04 ./assignments/c++/06-04.cpp
./assignments/c++/06-04.cpp: In function ‘int lcm(int, int, int)’:
./assignments/c++/06-04.cpp:31:1: warning: control reaches end of non-void function [-Wreturn-type]
   31 | }
      | ^
ucf (main) ➜
*/