/*
 Assignment: 15
 Problem: 03
 Topic: Operater Overloading, friend operator
 Description: Create a coordinate class with 2 instance variables x and y. Overload comma operator such that when you write c3=(c1,c2) then c2 is assigned to c3. Where c1,c2, and c3 are objects of Coordinate class.
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
};
int main()
{
    Coordinate c1(2,3),c2(1,6),c3;
    c3=(c1,c2);
    c3.showCoordinates();
    cout<<endl;
    return 0;
}