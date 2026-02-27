/*
 Assignment: 10
 Problem: 05
 Topic: Constructor
 Description: Define a class Complex with instance member variables for real and imaginary part of a complex number. Define only one parameterised constructor in the class to display object data. Now create an array of Complex class with size 5 and display values of each object.
 Date: 20-01-2026
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        float a,b;
    public:
        Complex(float real,float imaginary)
        {
            a=real;
            b=imaginary;
        }
        void showData()
        {
            if(b>=0)
                cout<<a<<"+"<<b<<"i"<<endl;
            if(b<0)
                cout<<a<<"-"<<-b<<"i"<<endl;
        }
};
int main()
{
    Complex c1(1.25,-4.4);
    c1.showData();
    cout<<endl;
    return 0;
}