/*
 Assignment: 09
 Problem: 03
 Topic: stack
 Description: Check for balanced brackets in an expression. For example, input is "[{(){()}}]", output is balanced. Input is "[{()]}", output is not balanced.
 Date: 04-03-2026
*/
#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
bool isBalanced(char[]);
bool isMatchingPair(char,char);
int main()
{
    char s[]="[{()]}",t[]="[{(){()}}]";
    if(isBalanced(s))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
    return 0;
}

bool isBalanced(char str[])
{
    stack <char> temp;
    int l=strlen(str);
    temp.push(str[0]);
    for(int i=1;i<l;i++)
    {
        if(!temp.empty() && isMatchingPair(temp.top(),str[i]))
            temp.pop();
        else
            temp.push(str[i]);
    }
    if(temp.empty())
        return true;
    else
        return false;
}

bool isMatchingPair(char a,char b)
{
    return a=='['?b==']':a=='{'?b=='}':a=='('?b==')':false;
}