/*
 Assignment: 10
 Problem: 01
 Topic: Constructor
 Description: Define a class Cuboid with length, breadth and height as instance member variables. Define constructors to initialise member variables.
 Date: 20-01-2026
*/
#include<iostream>
using namespace std;
class Cuboid
{
    private:
        float length, breadth, height;
    public:
        Cuboid()
        {
            length=0; breadth=0; height=0;
        }
        Cuboid(float x)
        {
            length=x; breadth=0; height=0;
        }
        Cuboid(float x,float y)
        {
            length=x; breadth=y; height=0;
        }    
        Cuboid(float x,float y,float z)
        {
            length=x; breadth=y; height=z;
        }
        void showData()
        {
            cout<<"Length: "<<length<<" Breadth: "<<breadth<<" height: "<<height<<endl;
        }
};
int main()
{
    Cuboid c1,c2(3.5),c3(4.5,6.5),c4(1.2,2.4,5.6);
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    cout<<endl;
    return 0;
}