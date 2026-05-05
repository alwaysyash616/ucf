/*
 Assignment: 03
 Problem: 04
 Topic: array
 Description: Create an array object for Complex type values of size 5. Write a function to input values, display values. Also define a method to calculate sum of all the complex numbers.
 Date: 02-03-2026
*/
#include<iostream>
#include<array>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        Complex()
        {

        }
        Complex(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void display()
        {
            if(b>=0)
                cout<<a<<"+"<<b<<"i ";
            else
                cout<<a<<"-"<<-b<<"i ";
        }
        void input()
        {
            cin>>a;
            cin>>b;
        }
        Complex add(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
void inputValues(array <Complex,5> &c)
{
    array<Complex,5>::iterator it;
    for(it=c.begin();it!=c.end();it++)
        (*it).input();
}

void displayValues(array <Complex,5> &c)
{
    array<Complex,5>::iterator it;
    for(it=c.begin();it!=c.end();it++)
    {
        (*it).display();
        cout<<endl;
    }
}

Complex calculateSum(array <Complex,5> &c)
{
    Complex temp(0,0);
    array<Complex,5>::iterator it;
    for(it=c.begin();it!=c.end();it++)
        temp=temp.add(*it);
    return temp;
}

int main()
{
    array <Complex,5> c1;
    inputValues(c1);
    displayValues(c1);
    Complex sum=calculateSum(c1); // default copy constructor
    sum.display();
    cout<<endl;
    return 0;
}
