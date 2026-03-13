/*
 Assignment: 18
 Problem: 04
 Topic: Inheritence
 Description: Define a class Shape with shapeName as instance variable. Provide setter and getter.
 Date: 01-02-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class Shape
{
    private:
        char shapeName[20];
    public:
        // Setter
        void setShape(char n[]) { strcpy(shapeName,n);}
        // Getter
        char* getShape() { return shapeName;}
};
int main()
{
    char n[]="Tetrahedron";
    Shape s1;
    s1.setShape(n);
    cout<<s1.getShape();
    cout<<endl;
    return 0;
}