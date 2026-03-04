/*
 Assignment: 14
 Problem: 01
 Topic: Operater Overloading, friend operator
 Description: Define a class Complex and overload following operators as a friend.
    1. +
    2. -
    3. *
 Date: 26-01-2026
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
      // Overloading of + operator
      Complex operator+(Complex C)
      {
         Complex temp;
         temp.a=a+C.a;
         temp.b=b+C.b;
         return temp;
      }
      // Overloading of - operator
      Complex operator-(Complex C)
      {
         Complex temp;
         temp.a=a-C.a;
         temp.b=b-C.b;
         return temp;
      }
      // Overloading of * operator
      Complex operator*(Complex C)
      {
         Complex temp;
         temp.a=a*C.a-b*C.b;
         temp.b=a*C.b+b*C.a;
         return temp;
      }
};
int main()
{
   Complex c1,c2,c3;
   c1.setData(5,6);
   c2.setData(1,3);
   c3=c1+c2;
   c1.showData();
   c2.showData();
   c3.showData();
   c3=c1-c2;
   c3.showData();
   c3=c1*c2;
   c3.showData();
   cout<<endl;
   return 0;
}
