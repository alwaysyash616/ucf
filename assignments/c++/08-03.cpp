/*
 Assignment: 08
 Problem: 03
 Topic: Classes and Objects
 Description: Define a class Date to represent date (like d=31, m=12, y=2022). Declare appropriate number of instance member variables and also define instance member functions to set date and get date.
 Date: 16-01-2026
*/
#include<iostream>
using namespace std;
class Date
{
    int dd,mm,yy;
    public:
    void setDate(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    void getDate()
    {
        cout<<"d="<<dd<<", "<<"m="<<mm<<", "<<"y="<<yy;
    }
};
int main()
{
    Date d1;
    d1.setDate(23,12,2002);
    d1.getDate();
    cout<<endl;
    return 0;
}