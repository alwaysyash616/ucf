/*
 Assignment: 12
 Problem: 03
 Topic: Operator Overloading
 Description: In Question-2, overload pre-increment and post-increment operator to increment Time object value by one second.
 Date: 23-01-2026
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,second;
    public:
        void showTime()
        {
            cout<<hour<<" hr "<<min<<" min "<<second<<" sec"<<endl;
        }
        void normalise()
        {
            if(second>=60)
            {
                min+=second/60;
                second%=60;
            }
            if(min>=60)
            {
                hour+=min/60;
                min%=60;
            }
        }
        Time(int h,int m,int s)
        {
            hour=h;
            min=m;
            second=s;
            normalise();
        }
        bool operator >(Time T)
        {
            int s1,s2;
            s1=(hour*60+min)*60+second;
            s2=(T.hour*60+T.min)*60+T.second;
            return s1>s2?true:false;
        }
        Time operator ++()
        {
            Time temp(hour,min,++second);
            return temp;
        }
};
int main()
{
    Time t1(3,4,5),t2(1,3,5);
    // cout<<(t1>t2)<<endl;
    cout<<(t1.operator >(t2))<<endl;

    t1.showTime();
    ++t1; // t1.operator ++();
    t1.showTime();
    cout<<endl;
    return 0;
}