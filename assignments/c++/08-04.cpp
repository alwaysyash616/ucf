/*
 Assignment: 08
 Problem: 04
 Topic: Classes and Objects
 Description: In question 3, define a methods to display date in the following pattern
    1.  31-12-2022
    2.  31-Dec-2022
 Date: 16-01-2026
*/
#include<iostream>
using namespace std;
class Date
{
    int dd,mm,yy;
    char month[12][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    public:
    void setDate(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    void getDate()
    {
        cout<<"d="<<dd<<", "<<"m="<<mm<<", "<<"y="<<yy<<endl;
    }
    void displayDate1()
    {
        cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
    void displayDate2()
    {
        cout<<dd<<"-"<<month[mm-1]<<"-"<<yy<<endl;
    }
};
int main()
{
    Date d1;
    d1.setDate(23,12,2002);
    d1.getDate();
    d1.displayDate1();
    d1.displayDate2();
    cout<<endl;
    return 0;
}