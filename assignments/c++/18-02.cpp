/*
 Assignment: 18
 Problem: 02
 Topic: Inheritence
 Description: Define a class Circle with radius as private instance variable and setRadius(), getRadius(), getArea() as public instance methods. Define a class ThickCircle as a subclass of Circle with thickness as private instance variable and getThickness(), setThinkness() as public instance methods. Provide an overridden method getArea() to calculate area of thick portion of circle.
 Date: 01-02-2026
*/
#include<iostream>
using namespace std;
class Circle
{
    private:
        float radius;
    public:
        void setRadius(float r) { radius=r;}
        float getRadius() { return radius;}
        float getArea() { return 3.14*radius*radius;}
};
class ThickCircle: public Circle
{
    private:
        float thickness;
    public:
        void setThickness(float t) { thickness=t;}
        float getthickness() { return thickness;}
        float getArea()
        {
            float r1=getRadius();
            float r2=r1+thickness;
            return 3.14*(r2*r2-r1*r1);
        }
};

int main()
{
    
    cout<<endl;
    return 0;
}