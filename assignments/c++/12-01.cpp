/*
 Assignment: 12
 Problem: 01
 Topic: Operator Overloading
 Description: Define a class Complex with appropriate instance variables and member functions. Define following operators in the class:
    1. +
    2. -
    3. *
    4. ==
 Date: 23-01-2026
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
        Complex operator +(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator -(Complex C)
        {
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;
            return temp;
        }
        Complex operator *(Complex C)
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=a*C.b+b*C.a;
            return temp;
        }
        bool operator ==(Complex C)
        {
            return a==C.a && b==C.b?true:false;
        }

};
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(3,4);
    c2.setData(5,7);

    c1.showData();
    c2.showData();
    c3=c1+c2; // c3=c1.operator +(c2);
    c3.showData();
    c3=c1-c2;
    c3.showData();
    c3=c1*c2;
    c3.showData();
    
    c4.setData(-13,41);
    cout<<(c3==c4); // c3.operator ==(c4);

    cout<<endl;
    return 0;
}