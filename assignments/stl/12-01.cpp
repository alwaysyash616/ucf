/*
 Assignment: 12
 Problem: 01
 Topic: string
 Description: Define a function to count vowels in a given string.
 Date: 05-03-2026
*/
#include<iostream>
#include<string>
using namespace std;
int countVowels(string&);
int main()
{
    string str="mysirg education services private limited";
    cout<<"Number of vowels: "<<countVowels(str);
    cout<<endl;
    return 0;
}

int countVowels(string &s)
{
    string vowels="aeiouAEIOU";
    int count=0;
    for(auto x:s)
    {
        for(auto c:vowels)
            if(x==c)
            {
                count+=1;
                break;
            }
    }
    return count;
}