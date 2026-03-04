/*
 Assignment: 15
 Problem: 02
 Topic: Operater Overloading, friend operator
 Description: Define a class Integer with instance member variable of type int. Provide a friend logical operator not !. Also define a friend operator == to compare two Integer objects.
 Date: 27-01-2026
*/
#include<iostream>
using namespace std;
class Integer
{
    private:
        int a;
    public:
        Integer(int x=0)
        {
            a=x;
        }
        void showData()
        {
            cout<<"a="<<a<<endl;
        }
        friend bool operator !(Integer);
        friend bool operator ==(Integer,Integer);
};
bool operator ==(Integer I1,Integer I2)
{
    if(I1.a==I2.a)
        return true;
    else
        return false;
}
bool operator !(Integer I)
{
    if(I.a==0)
        return true;
    else
        return false;
}
int main()
{
    Integer i1(5),i2(10),i3(5);
    i1.showData();
    cout<<!i1<<endl;  //operator !(i1);
    cout<<(i1==i3)<<endl;
    cout<<(i1==i2);
    cout<<endl;
    return 0;
}