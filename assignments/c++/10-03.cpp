/*
 Assignment: 10
 Problem: 03
 Topic: Constructor
 Description: Define a class Time with hr, min, sec as instance member variables. Define constructor to initialise time object.
 Date: 20-01-2026
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
    // 
    Time(int h,int m,int s)
    {
        hr=h; min=m; sec=s;
        normalise();
    }
    void normalise()
    {
        if(sec>=60)
        {
            min+=sec/60;
            sec%=60;
        }
        if(min>=60)
        {
            hr+=min/60;
            min%=60;
        }
    }
    void showTime()
    {
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
    }
};
int main()
{
    Time t1(4,65,126);
    t1.showTime();
    cout<<endl;
    return 0;
}