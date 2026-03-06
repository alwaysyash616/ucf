/*
 Assignment: 16
 Problem: 01
 Topic: Pointer, this, DMA
 Description: Define a class Person with name and age as instance variables. Provide parameterised constructor with two formal arguments name & age, to initialise instance variables.
 Date: 28-01-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        char name[20];
        int age;
    public:
        Person(char n[],int a)
        {
            strcpy(name,n);
            age=a;
        }
};
int main()
{
    Person p1("Yash",23); 
    cout<<endl;
    return 0;
}