/*
 Assignment: 15
 Problem: 04
 Topic: Operater Overloading, friend operator
 Description: In Question-3, provide overloaded insertion and extraction operators.
 Date: 27-01-2026
*/
#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x,y;
    public:
        Coordinate(int a=0,int b=0)
        {
            x=a;
            y=b;
        }
        Coordinate operator ,(Coordinate C)
        {
            return C;
        }
        void showCoordinates()
        {
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        friend ostream& operator <<(ostream&,Coordinate);
        friend istream& operator >>(istream&,Coordinate&);
};

ostream& operator <<(ostream &dout,Coordinate C)
{
    dout<<"("<<C.x<<","<<C.y<<")"<<endl;
    return dout;
}

istream& operator >>(istream& din,Coordinate &C)
{
    din>>C.x>>C.y;
    return din;
}


int main()
{
    Coordinate c1(2,3),c2(1,6),c3;
    c3=(c1,c2);
    c3.showCoordinates();
    cout<<"Enter coordinates:"<<endl;
    cin>>c1>>c2>>c3;
    cout<<"Your coordinates: "<<endl<<c1<<c2<<c3;
    cout<<endl;
    return 0;
}