/*
 Assignment: 11
 Problem: 05
 Topic: Constructor
 Description: Define Circle class with radius as instance variable. Define two constructors in the class -non parameterised and parameterised.
 Date: 21-01-2026
*/
#include<iostream>
using namespace std;
class Circle
{
    private:
        float radius;
    public:
        Circle()
        {
            radius=0;
        }
        Circle(float r)
        {
            radius=r;
        }
};
int main()
{
    Circle c1,c2(2.4);
    cout<<endl;
    return 0;
}