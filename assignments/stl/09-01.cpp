/*
 Assignment: 09
 Problem: 01
 Topic: stack
 Description: Check if a string is a palindrome using stack.
 Date: 04-03-2026
*/
#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
bool isPalindrome(char[]);
int main()
{
    char s[]="hannah";
    cout<<isPalindrome(s);
    cout<<endl;
    return 0;
}

bool isPalindrome(char str[])
{
    int i;
    int l=strlen(str);
    stack <char> s1;
    for(i=0;i<l;i++)
        s1.push(str[i]);
    for(i=0;i<l;i++)
    {
        if(str[i]!=s1.top())
            return false;
        else
            s1.pop();
    }
    return true;
}