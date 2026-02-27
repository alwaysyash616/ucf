/*
 Assignment: 10
 Problem: 02
 Topic: Constructor
 Description: Define a class Customer with instance members cust_id, name, email, mobile. Define non parameterised constructor and parameterised constructor in the class.
 Date: 20-01-2026
*/
#include<iostream>
// #include<stdlib.h>
// #include<stdio.h>
#include<string.h>
using namespace std;
class Customer
{
    private:
        int cust_id;
        char name[20];
        char email[30];
        char mobile[14];
    public:
        Customer()
        {
            cust_id=0;
            strcpy(name,"John Smith");
            strcpy(email,"someone@example.com");
            strcpy(mobile,"0000000000");
        }
        Customer(int id,char n[],char e[],char m[])
        {
            cust_id=id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(mobile,m);
        }
        void showData()
        {
            cout<<"Customer ID: "<<cust_id<<endl<<"Name: "<<name<<endl<<"E-Mail: "<<email<<endl<<"Mobile: "<<mobile<<endl<<"----------------------"<<endl;
        }
};
int main()
{
    // Customer c1,c2(60,"Yash Kushwaha","yash274602@gmail.com","7800831008"); //Warning: String Literals are read-only in C++. But in this line, programmer (I am) trying to pass them to char*, which implies writble memory.
    int id;
    char name[20]="";
    char email[30]="";
    char mobile[14]="";
    cout<<"Enter Customer ID: ";
    cin>>id;
    getchar();
    cout<<"Customer Name: ";
    fgets(name,20,stdin);
    if(name[strlen(name)-1]=='\n')
        name[strlen(name)-1]='\0';
    cout<<"E-Mail: ";
    cin>>email;
    cout<<"Contact: ";
    cin>>mobile;

    system("clear");
    Customer c1,c2(id,name,email,mobile);
    system("clear");
    c1.showData();
    c2.showData();
    cout<<endl;
    return 0;
}