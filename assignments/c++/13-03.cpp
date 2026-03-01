/*
 Assignment: 13
 Problem: 03
 Topic: Operator Overloading
 Description: Consider a class Distance
    class Distance
    {
        int km, m, cm;
        public:
            //methods;
    };
 Date: 24-01-2026
*/
#include<iostream>
using namespace std;
class Distance
{
    int km,m,cm;
    public:
        Distance(int kilometers=0,int meters=0,int centimeters=0)
        {
            km=kilometers;
            m=meters;
            cm=centimeters;
            normalise();
        }
        void normalise()
        {
            if(cm>=100)
            {
                m+=cm/100;
                cm%=100;
            }
            if(m>=1000)
            {
                km+=m/1000;
                m%=1000;
            }
        }
        Distance operator +(Distance D)
        {
            Distance temp;
            temp.km=km+D.km;
            temp.m=m+D.m;
            temp.cm=cm+D.cm;
            temp.normalise();
            return temp;
        }
        void showDistance()
        {
            cout<<km<<" kilometers "<<m<<" meters "<<cm<<" centimeters"<<endl;
        }
};
int main()
{
    Distance d1(1,2004,506),d2(2,1005,203),d3;
    d1.showDistance();
    d2.showDistance();
    d3=d1+d2;
    d3.showDistance();
    cout<<endl;
    return 0;
}