/*
 Assignment: 17
 Problem: 01
 Topic: Pointer, this, DMA
 Description: Define a class Time with instance variables hr, min and sec. Provide instance methods setTime() and showTime(). setTime() method has formal arguments with the same name as instance variables. Also define setters and getters.
 Date: 30-01-2026
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
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
        void setTime(int hr,int min,int sec)
        {
            this->hr=hr;
            this->min=min;
            this->sec=sec;
            normalise();
        }
        void showTime()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }

        // Setters
        void setHr(int h) { hr=h; }
        void setMin(int m) { min=m; }
        void setSec(int s) { sec=s; }

        // Getters
        int getHr() { return hr; }
        int getMin() { return min; }
        int getSec() { return sec; }
};
int main()
{

    return 0;
}