/*
 Assignment: 15
 Problem: 01
 Topic: Operater Overloading, friend operator
 Description: Define a class Complex and provide a unary friend operator - to negate the real and imaginary part of a complex number.
 Date: 27-01-2026
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        Complex(int x=0,int y=0)
        {
            a=x;
            b=y;
        }
        
        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
        friend Complex operator -(Complex);
};
Complex operator -(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}
int main()
{
    Complex c1(3,4),c2;
    // c2=-c1; // c2=c1.operator -(); // When the - operator is defined as a member in Complex class.
    c2=-c1; // c2=operator -(c1);     // When the - operator is defined as a friend to Complex class.
    c2.showData();
    cout<<endl;
    return 0;
}