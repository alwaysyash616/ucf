/*
 Assignment: 09
 Problem: 01
 Topic: Member Functions
 Description: Define a class complex to represent a complex number with instance variables a and b to store real and imaginary parts. Also define following member functions
    1. void setData(int,int)
    2. void showData()
    3. Complex add(Complex)
    4. Complex subtract(Complex)
    5. Complex multiply(Complex)
 Date: 19-01-2026
*/
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setData(int,int);
        void showData();
        Complex add(Complex);
        Complex subtract(Complex);
        Complex multiply(Complex);
};
Complex Complex::add(Complex c)
{
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
Complex Complex::subtract(Complex c)
{
    Complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
Complex Complex::multiply(Complex c)
{
    Complex temp;
    temp.a=a*c.a-b*c.b;
    temp.b=a*c.b+b*c.a;
    return temp;
}
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(2,-3);
    c1.showData();
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
    c3=c1.subtract(c2);
    c3.showData();
    c3=c1.multiply(c2);
    c3.showData();
    return 0;
}