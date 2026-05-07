/*
 Assignment: 06
 Problem: 01
 Topic: list
 Description: Create a list of string values and display all the elements in reverse order.
 Date: 03-03-2026
*/
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <string> l1={"Shrishti","Shivangi","Varsha","Aditi","Beauty"};
    list<string>::const_reverse_iterator crit;
    for(crit=l1.crbegin();crit!=l1.crend();crit++)
        cout<<*crit<<" ";
    cout<<endl;
    return 0;
}