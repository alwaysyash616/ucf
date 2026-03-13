/*
 Assignment: 18
 Problem: 05
 Topic: Inheritence
 Description: In question 3 & 4, derive a class StraightLine from Shape with two Coordinate type objects as instance members. Provide methods to setLine(), getDistance() and showLine()
 Date: 01-02-2026
*/
#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
class Coordinate
{
    private:
        float x,y;
    public:
        // Coordinate(float x,float y):x(x),y(y) {}
        void setCoordinates(float x,float y)
        {
            this->x=x;
            this->y=y;
        }
        float getDistance()
        {
            return sqrt(x*x+y*y);
        }
        float getDistance(Coordinate C)
        {
            float x=C.x-this->x;
            float y=C.y-this->y;
            return sqrt(x*x+y*y);
        }
        float getX() { return x;}
        float getY() { return y;}
};
class Shape
{
    private:
        char shapeName[30];
    public:
        // Setter
        void setShape(char n[]) { strcpy(shapeName,n);}
        // Getter
        char* getShape() { return shapeName;}
};

class StraightLine:public Shape
{
    private:
        Coordinate c1,c2;
    public:
        StraightLine()
        {
            char temp[30]="Straight Line segment";
            setShape(temp);
        }
        void setLine(int x1,int y1,int x2,int y2)
        {
            c1.setCoordinates(x1,y1);
            c2.setCoordinates(x2,y2);
        }
        float getDistance()
        {
            return c1.getDistance(c2);
        }
        void showLine()
        {
            cout<<getShape()<<endl;
            cout<<"Coordinates: "<<"("<<c1.getX()<<","<<c1.getY()<<") ";
            cout<<"("<<c2.getX()<<","<<c2.getY()<<")"<<endl;

            cout<<"Distance: "<<getDistance()<<endl;
            // WHAT SHOULD BE HERE!
        }
};
int main()
{
    StraightLine s1;
    s1.setLine(2,4,7,10);
    s1.showLine();
    cout<<endl;
    return 0;
}