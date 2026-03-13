/*
 Assignment: 18
 Problem: 01
 Topic: Inheritence
 Description: Define a class Person with name and age as instance variables as private members. Provide setters and getters as protected methods. Derive a class Employee from Person class with private instance variable salary. Provide public methods setEmployee() and showEmployee().
 Date: 01-02-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        char name[20];
        int age;
    protected:
        // Setters
        void setName(char n[]) { strcpy(name,n);}
        void setAge(int a) { age=a;}
        // Getters
        char *getName() { return name;}
        int getAge() { return age;}
};
class Employee:public Person
{
    private:
        int salary;
    public:
        void setEmployee(char n[],int a,int s)
        {
            setName(n);
            setAge(a);
            salary=s;
        }
        void showEmployee()
        {
            cout<<getName()<<endl<<"Age: "<<getAge()<<endl<<"Salary: "<<salary<<endl;
        }

};
int main()
{
    char n[20]="Vikesh Verma";
    Employee e1;
    e1.setEmployee(n,22,50000);
    e1.showEmployee();
    cout<<endl;
    return 0;
}