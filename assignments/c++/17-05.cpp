/*
 Assignment: 17
 Problem: 05
 Topic: Pointer, this, DMA
 Description: Define a class String with char pointer and length of the string as instance member variables. Define a method to dyncamically create an array of char type and hold the input string in such a way that the array length is just enough to accomodate the input string.
 Date: 30-01-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
        char *p;
        int length;
    public:
        void storeString(char s[])
        {
            int l=strlen(s);
            p=new char[l+1];
            strcpy(p,s);
        }
        ~String()
        {
            delete []p;
        }
        void printString()
        {
            int i;
            for(i=0;p[i];i++)
                cout<<p[i];
        }
};
int main()
{
    char str[20]="Hello AI";
    String s1;
    s1.storeString(str);
    s1.printString();
    cout<<endl;
    return 0;
}