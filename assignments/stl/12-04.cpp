/*
 Assignment: 12
 Problem: 04
 Topic: string
 Description: Define a function to capitalise a given string. Make first letter of each word capital.
 Date: 05-03-2026
*/
#include<iostream>
#include<string>
using namespace std;
void capitalise(string&);
int main()
{
    string str="mysirg";
    capitalise(str);
    for(auto x:str)
        cout<<x;
    cout<<endl;
    return 0;
}

void capitalise(string &str)
{
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
        if(*it>=97 && *it<=122)
            *it-=32;
}