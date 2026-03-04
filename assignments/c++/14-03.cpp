/*
 Assignment: 14
 Problem: 03
 Topic: Operater Overloading, friend operator
 Description: In Question-2, over load operator= to perform copy of Time object.
 Date: 26-01-2026
*/
#include<iostream>
using namespace std;
class Time
{
   private:
      int h,m,s;
   public:
      void normalise()
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
      }
      Time(int hour=0,int minut=0,int second=0)
      {
         h=hour;
         m=minut;
         s=second;
         normalise();
      }
      void showTime()
      {
         cout<<h<<":"<<m<<":"<<s<<endl;
      }
      friend ostream& operator <<(ostream&,Time);
      friend istream& operator >>(istream&,Time&);
      void operator =(Time T)
      {
        h=T.h;
        m=T.m;
        s=T.s;
      }
};

ostream& operator <<(ostream &dout,Time T)
{
   dout<<T.h<<":"<<T.m<<":"<<T.s<<endl;
   return dout;
}
istream& operator >>(istream &din,Time &T)
{
   din>>T.h>>T.m>>T.s;
   return din;
}
int main()
{
   Time t1(1,3,66),t2(2,66,102);
   t1.showTime();
   t2.showTime();
//    cout<<"Enter current time"<<endl;
//    cin>>t1>>t2;
//    t1.showTime();
//    t2.showTime();
   t1=t2;
   t1.showTime();
   cout<<endl;
   return 0;
}