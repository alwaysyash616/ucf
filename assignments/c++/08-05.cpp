/*
 Assignment: 08
 Problem: 05
 Topic: Classes and Objects
 Description: Define a class Circle with radius as its property. Provide setRadius() and getRadius() methods. Also define methods to return area and circumference of circle.
 Date: 16-01-2026
*/
#include<iostream>
using namespace std;
class Circle
{
    float radius;
    public:
    void setRadius(float r)
    {
        radius=r;
    }
    void getRadius()
    {
        cout<<"Radius: "<<radius<<endl;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
    float circumference()
    {
        return 2*3.14*radius;
    }
};
int main()
{
    float a,c;
    Circle c1;
    c1.setRadius(4.5);
    c1.getRadius();
    a=c1.area();
    c=c1.circumference();
    cout<<"Area: "<<a<<endl<<"Circumference: "<<c;
    cout<<endl;
    return 0;
}