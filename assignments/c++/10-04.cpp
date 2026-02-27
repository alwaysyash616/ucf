/*
 Assignment: 10
 Problem: 04
 Topic: Constructor
 Description: Define a class Book with bookid, title and price as instance member variables. Define non parameterised and parameterised constructor in the class.
 Date: 20-01-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class Book
{   private:
        int bookid;
        float price;
        char title[20];
    public:
        Book()
        {
            bookid=0;
            strcpy(title,"Somebook");
            price=0;
        }
        Book(int id,char t[],float p)
        {
            bookid=id;
            strcpy(title,t);
            price=p;
        }
        void showBook()
        {
            cout<<"Book ID: "<<bookid<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Price: "<<price<<endl<<"----------------------"<<endl;
        }
};
int main()
{
    char title[10]="Java";
    Book b1,b2(1,title,480.0);
    b1.showBook();
    b2.showBook();
    cout<<endl;
    return 0;
}