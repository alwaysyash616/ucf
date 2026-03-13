/*
 Assignment: 18
 Problem: 03
 Topic: Inheritence
 Description: Define a class Coordinate with x and y as instance variables. Define overloaded versions of getDistance(), first with no argument calculating distance from origin, and second with one argument of Coordinate type to calculate distance between two coordinates. Also define other methods if required.
 Date: 01-02-2026
*/
#include<iostream>
#include<cmath>
using namespace std;

class Coordinate
{
    private:
        float x,y;
    public:
        Coordinate(float x,float y):x(x),y(y) {}

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
};

int main()
{
    
    cout<<endl;
    return 0;
}