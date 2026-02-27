/*
 Assignment: 11
 Problem: 02
 Topic: Constructor
 Description: Define a class Student and write a program to enter student details using constructor and define member function to display all the details.
 Date: 21-01-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int rollno;
        char name[20];
        int marks;
    public:
        Student()
        {
            int l;
            cout<<"Roll Number: ";
            cin>>rollno;
            getchar();
            cout<<"Name of Student: ";
            fgets(name,20,stdin);
            l=strlen(name);
            if(name[l-1]=='\n')
                name[l-1]='\0';
            cout<<"Marks: ";
            cin>>marks;
            system("clear");
        }
        void showDetails()
        {
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main()
{
    Student s1;
    s1.showDetails();
    cout<<endl;
    return 0;
}