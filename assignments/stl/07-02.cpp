/*
 Assignment: 07
 Problem: 02
 Topic: forward_list
 Description: Create a forward_list of strings and display them in reverse order.
 Date: 03-03-2026
*/
#include<iostream>
#include<vector>
#include<forward_list>
using namespace std;
int main()
{
    forward_list <string> l1={"Elle Fanning","Katherine Langford","Kristen Stewart","Sarah Gadon","Emma Watson","Amber Heard","Elizabeth Olsen","Ana De Amras","Scarlett Johansson","Alexandra Daddario"};
    vector <string> v1;
    forward_list<string>::const_iterator cit;
    
    for(auto x:l1)
        cout<<x<<endl;

    cout<<endl;

    for(cit=l1.begin();cit!=l1.end();cit++)
        v1.push_back(*cit);

    for(vector<string>::reverse_iterator rit=v1.rbegin();rit!=v1.rend();rit++)
        cout<<*rit<<endl;

    cout<<endl;
    return 0;
}