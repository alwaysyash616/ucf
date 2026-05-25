/*
 Assignment: 13
 Problem: 01
 Topic: string
 Description: Define a function to count words in a given string.
 Date: 06-03-2026
*/
#include<iostream>
#include<string>
using namespace std;
int countWords(string&);
int main()
{
    string str="mysirg education services pvt ltd";
    cout<<"Number of words: "<<countWords(str);
    cout<<endl;
    return 0;
}

int countWords(string &str)
{
    int count=0;
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        if(*it==' ' && it!=str.begin() && it!=str.end()-1)
            count+=1;
    }
    return count+1;
}