/*
 Assignment: 08
 Problem: 02
 Topic: Classes and Objects
 Description: Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
 Date: 16-01-2026
*/
#include<iostream>
using namespace std;
class Time
{
    int hh,mm,ss;
    public:
    bool setTime(int h,int m,int s)
    {
        if(h<0 || h>=24)
        {
            cout<<"Hour Invalid"<<endl;
            return false;
        }
        else if(m<0 || m>=60)
        {
            cout<<"Minut Invalid"<<endl;
            return false;
        }
        else if(s<0 || s>=60)
        {
            cout<<"Second Invalid"<<endl;
            return false;
        }
        else
        {
            hh=h;
            mm=m;
            ss=s;
            return true;
        }
    }
    void displayTime()
    {
        cout<<hh<<" hr "<<mm<<" min "<<ss<<" sec";
    }
};

int main()
{
    Time t1;
    if(t1.setTime(2,5,6))
        t1.displayTime();
    cout<<endl;
    return 0;
}