/*
 Assignment: 17
 Problem: 02
 Topic: Pointer, this, DMA
 Description: In question-1, define a method to dynamically create an Array of Time objects with specified size (received through argument) and return array.
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
Time* f1(int);
int main()
{
    Time *t1=f1(5);
    delete []t1;
    cout<<endl;
    return 0;
}

Time* f1(int size)
{
    Time *p=new Time[size];
    return p;
}