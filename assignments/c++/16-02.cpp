/*
 Assignment: 16
 Problem: 02
 Topic: Pointer, this, DMA
 Description: Define a class Complex with instance variables a and b to store real and imaginary part of a complex number. Provide setData() method with formal arguments with the name a and b, to set the values of instance variables. Also define showData() method to display instance member variables values.
 Date: 28-01-2026
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
};
int main()
{
    Complex c1;
    c1.setData(3,4);
    c1.showData();
    cout<<endl;
    return 0;
}