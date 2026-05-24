/*
 Assignment: 12
 Problem: 03
 Topic: string
 Description: Define a function to search a given pattern in a given string.
 Date: 05-03-2026
*/
#include<iostream>
#include<string>
using namespace std;
int* searchPattern(string&,string&);
int main()
{
    string str="mysirg education services pvt ltd",pattern="sert";
    int *p=searchPattern(str,pattern);
    if(p)
        cout<<"Pattern found, Index: "<<p[0]<<" to "<<p[1]<<" characters";
    else
        cout<<"Pattern not found.";
    cout<<endl;
    return 0;
}

int* searchPattern(string &s,string &p)
{
    int *ptr=nullptr;
    for(int len=1;len<=s.size();len++)
    {
        for(int startIndex=0;startIndex<=s.size()-len;startIndex++)
            if(p.compare(s.substr(startIndex,len))==0)
            {
                ptr=new int[2];
                ptr[0]=startIndex;
                ptr[1]=len;
                return ptr;
            }
    }
    return ptr;
}