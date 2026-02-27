/*
 Assignment: 09
 Problem: 02
 Topic: Member Functions
 Description: Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second. Also define following member functions
    1. void setTime(int,int,int)
    2. void showTime()
    3. void normalize()
    4. Time add(Time)
    5. bool is_greater(Time)
 Date: 19-01-2026
*/
#include<iostream>
using namespace std;
class Time
{
   private:
      int h,m,s;
   public:
      void setTime(int,int,int);
      void showTime();
      void normalize();
      Time add(Time);
      bool is_greater(Time);
};
void Time::setTime(int hh,int mm,int ss)
{
   h=hh;
   m=mm;
   s=ss;
}
void Time::showTime()
{
   cout<<h<<" hr "<<m<<" min "<<s<<" sec"<<endl;
}
void Time::normalize()
{
   if(s>=60)
   {
      m+=s/60;
      s%=60;
   }
   if(m>=60)
   {
      h+=m/60;
      m%=60;
   }
   // showTime();
}
Time Time::add(Time t)
{
   Time temp;
   temp.h=h+t.h;
   temp.m=m+t.m;
   temp.s=s+t.s;
   temp.normalize();
   return temp;
}
bool Time::is_greater(Time t)
{
   int t1,t2;
   t1=(((h*60)+m)*60)+s;
   t2=(((t.h*60)+t.m)*60)+t.s;
   if(t1>t2)
      return true;
   else
      return false;
}

int main()
{
   Time t1,t2,t3;
   t1.setTime(2,100,150);
   t1.normalize();
   t1.showTime();
   t2.setTime(1,30,62);
   t2.normalize();
   t2.showTime();
   t3=t1.add(t2);
   t3.showTime();
   cout<<t1.is_greater(t3);
   cout<<endl;
   return 0;
}