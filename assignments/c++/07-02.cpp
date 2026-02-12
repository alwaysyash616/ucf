/*
 Assignment: 07
 Problem: 02
 Topic: More on Functions in C++
 Description: Define overloaded functions to calculate volume of a cuboid, cone and sphere
 Date: 14-01-2026
*/
#include<iostream>
using namespace std;
float vol(float,float,float);
float vol(float,float);
float vol(float);
int main()
{
    float l,b,h,r;
    cout<<"Enter length, breadth and height of cuboid: ";
    cin>>l>>b>>h;
    cout<<"Volume of Cuboid: "<<vol(l,b,h)<<endl;
    cout<<"Enter height and radius of cone: ";
    cin>>h>>r;
    cout<<"Volume of Cone: "<<vol(r,h)<<endl;
    cout<<"Enter radius of Sphere: ";
    cin>>r;
    cout<<"Volume of Sphere: "<<vol(r);
    cout<<endl;
    return 0;
}

float vol(float l,float b,float h)
{
    return l*b*h;
}

float vol(float r,float h)
{
    return (3.14*r*r*h)/3;
}

float vol(float r)
{
    return (4*3.14*r*r*r)/3;
}