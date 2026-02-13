/*
 Assignment: 08
 Problem: 01
 Topic: Classes and Objects
 Description: Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number
 Date: 16-01-2026
*/
#include<iostream>
using namespace std;
class Complex
{
    float a,b;
    public:
    void setValue(float real,float imaginary)
    {
        a=real;
        b=imaginary;
    }
    void printValue()
    {
        if(b>=0)
            cout<<a<<"+"<<b<<"i";
        else
        {
            cout<<a<<"-"<<-b<<"i";
        }
    }
};
int main()
{
    Complex c1;
    c1.setValue(3.0,-4.5);
    c1.printValue();
    cout<<endl;
    return 0;
}