/*
 Assignment: 13
 Problem: 04
 Topic: Operator Overloading
 Description: In Question-3, define operator pre decrement and post decrement to decrease distance by 1 cm.
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
        Distance operator --()
        {
            if(cm>=1)
            {
                cm-=1;
            }
            else if(m>=1)
            {
                m-=1;
                cm=99;
            }
            else if(km>=1)
            {
                km-=1;
                m=999;
                cm=99;
            }
            Distance temp;
            temp.km=km;
            temp.m=m;
            temp.cm=cm;
            return temp;
        }
        Distance operator --(int)
        {
            Distance temp;
            temp.km=km;
            temp.m=m;
            temp.cm=cm;
            if(cm>=1)
            {
                cm-=1;
            }
            else if(m>=1)
            {
                m-=1;
                cm=99;
            }
            else if(km>=1)
            {
                km-=1;
                m=999;
                cm=99;
            }
            return temp;
        }
        void showDistance()
        {
            cout<<km<<" kilometers "<<m<<" meters "<<cm<<" centimeters"<<endl;
        }
};
int main()
{
    Distance d1(1,2004,506),d2(2,1005,203),d3,d4,d5;
    d1.showDistance();
    d2.showDistance();
    d3=d1+d2; // d3=d1.operator +(d2);
    d3.showDistance();
    d3.operator --();
    d3.showDistance();
    d4=--d3;
    d4.showDistance();
    d5=d4--; // d5=d4.operator --(0);
    d4.showDistance();
    d5.showDistance();
    cout<<endl;
    return 0;
}

/*                              ChatGPT
Case A: Pre decrement
--d4;
Compiler translates internally to:
d4.operator--();
So it calls:
Distance operator--();


Case B: Post decrement
d4--;
Compiler translates internally to:
d4.operator--(0);
So it calls:
Distance operator--(int);
The compiler automatically passes 0 (or any int internally).

Yes, you technically can call it manually

Your example:
d4.operator--(1);

This will also call the post decrement version, because the signature matches (int).
The value 1 itself has no meaning.
*/