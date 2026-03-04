/*
 Assignment: 15
 Problem: 05
 Topic: Operater Overloading, friend operator
 Description: Define a class Student with roll no, name and age as instance variables. Create setStudent() and showStudent() methods in the class. Overload operator == to compare two Student objects.
 Date: 27-01-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int rollno;
        char name[20];
        int age;
    public:
        void setStudent(int r,const char n[],int a)
        {
            rollno=r;
            strcpy(name,n);
            age=a;
        }
        void showStudent()
        {
            cout<<"Roll Number: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
        bool operator ==(Student S)
        {
            if(rollno!=S.rollno)
                return false;
            else if(strcmp(name,S.name))
                return false;
            else if(age!=S.age)
                return false;
            else
                return true;
        }
};
int main()
{
    Student s1,s2,s3,s4;
    s1.setStudent(1,"Shrishti",20);
    s2.setStudent(2,"Yash",23);
    s3.setStudent(3,"Shivangi",24);
    s4.setStudent(2,"Yash",23);
    cout<<(s1==s2);
    cout<<(s1==s3);
    cout<<(s2==s4);
    cout<<endl;
    return 0;
}