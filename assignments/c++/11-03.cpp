/*
 Assignment: 11
 Problem: 03
 Topic: Constructor
 Description: Define a class Date with d,m,y as instance member variables. Initialise members using initialisers.
 Date: 21-01-2026
*/
#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        Date(int date,int month,int year):d(date),m(month),y(year)
        {

        }
        void showDate()
        {
            cout<<"Date: "<<d<<endl;
            cout<<"Month: "<<m<<endl;
            cout<<"Year: "<<y<<endl;
        }
};
int main()
{
    Date d1={6,8,2006};
    // Date d1(19,12,2001);
    d1.showDate();
    cout<<endl;
    return 0;
}