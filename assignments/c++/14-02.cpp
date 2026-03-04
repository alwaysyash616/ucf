/*
 Assignment: 14
 Problem: 02
 Topic: Operater Overloading, friend operator
 Description: Define a class Time with appropriate instance variables and member functions.
    Overload following operators
    1.  << insertion operator
    2.  >> extraction operator
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
   cout<<"Enter current time"<<endl;
   cin>>t1>>t2;
   t1.showTime();
   t2.showTime();
   cout<<endl;
   return 0;
}

/*
cout - ostream
cin  - istream


*/