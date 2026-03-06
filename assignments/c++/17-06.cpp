/*
 Assignment: 17
 Problem: 06
 Topic: Pointer, this, DMA
 Description: In question-5, define methods to convert string into uppercase, lowercase.
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
            cout<<endl;
        }
        void convertLowercase()
        {
            int i;
            for(i=0;p[i];i++)
            {
                if(p[i]>=65 && p[i]<=90)
                    p[i]+=32;
            }
        }
        void convertUppercase()
        {
            int i;
            for(i=0;p[i];i++)
            {
                if(p[i]>=97 && p[i]<=122)
                    p[i]-=32;
            }
        }
};
int main()
{
    char str[20]="Hello AI";
    String s1;
    s1.storeString(str);
    s1.printString();
    s1.convertUppercase();
    s1.printString();
    s1.convertLowercase();
    s1.printString();
    cout<<endl;
    return 0;
}