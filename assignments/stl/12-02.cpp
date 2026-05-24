/*
 Assignment: 12
 Problem: 02
 Topic: string
 Description: Define a function to check wheather if a given string is palindrome or not.
 Date: 05-03-2026
*/
#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string&);
int main()
{
    string str="hannah";
    cout<<isPalindrome(str);
    cout<<endl;
    return 0;
}

bool isPalindrome(string &s)
{
    char temp;
    string s1=s;
    string::iterator it;
    for(int i=0;i<s1.size()/2;i++)
    {
        temp=s1[i];
        s1[i]=s1[s1.size()-1-i];
        s1[s1.size()-1-i]=temp;
    }
    for(int i=0;i<s.size();i++)
        if(s1[i]!=s[i])
            return false;
    return true;
}