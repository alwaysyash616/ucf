/*
 Assignment: 12
 Problem: 05
 Topic: string
 Description: Define a function to reverse a string.
 Date: 05-03-2026
*/
#include<iostream>
#include<string>
using namespace std;
void reverse(string&);
int main()
{
    string str="computer";
    reverse(str);
    for(auto x:str)
        cout<<x;
    cout<<endl;
    return 0;
}

void reverse(string &str)
{
    char temp;
    string::iterator it;
    for(int i=0;i<str.size()/2;i++)
    {
        temp=str[i];
        str[i]=str[str.size()-1-i];
        str[str.size()-1-i]=temp;
    }
}