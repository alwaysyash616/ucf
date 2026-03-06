/*
 Assignment: 17
 Problem: 04
 Topic: Pointer, this, DMA
 Description: In question-1, define a method to display Time object array values. Array is received through argument.
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

        // 
        int getAbsoluteTime()
        {
            int seconds=((hr*60)+min)*60+sec;
            return seconds;
        }
};
Time* f1(int);
void sort(Time[],int);
int main()
{
    int i;
    // Time *t1=f1(5);
    // delete []t1;
    Time t1[5];
    t1[0].setTime(4,0,0);
    t1[1].setTime(10,5,55);
    t1[2].setTime(8,1,60);
    t1[3].setTime(17,11,66);
    t1[4].setTime(17,12,0);

    sort(t1,5);

    displayTimes(t1,5);
    cout<<endl;
    return 0;
}

void sort(Time t[],int size)
{
    int i,j;
    Time temp;
    for(i=1;i<=size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(t[j].getAbsoluteTime()>t[j+1].getAbsoluteTime())
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }
    }
}

void displayTimes(Time t[],int size)
{
    int i;
    for(i=0;i<size;i++)
        t[i].showTime();
}

// Time* f1(int size)
// {
//     Time *p=new Time[size];
//     return p;
// }