/*
 Assignment: 16
 Problem: 03
 Topic: Pointer, this, DMA
 Description: In question-2, write a non member function in which instantiate Complex class dynamically, Initialise instance variables and display their values.
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
void f1();
int main()
{
    f1();
    cout<<endl;
    return 0;
}
void f1()
{
    Complex *p=new Complex;
    // (*p).setData(8,9);
    // (*p).showData();
    p->setData(8,9);
    p->showData();
    delete p;
}