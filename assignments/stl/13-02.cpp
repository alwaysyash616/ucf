/*
 Assignment: 13
 Problem: 02
 Topic: string
 Description: Define a function to trim a string.
 Date: 06-03-2026
*/
#include<iostream>
#include<string>
using namespace std;
void trim(string&);
int main()
{
    string str="   mysirg education services   ";
    trim(str);
    cout<<str;
    cout<<endl;
    return 0;
}

void trim(string &str)
{
    int b,e;
    string temp;
    for(b=0;str[b]==' ';b++);
    for(e=str.size()-1;str[e]==' ';e--);
    temp=str.substr(b,e-b+1);
    str=temp;
}