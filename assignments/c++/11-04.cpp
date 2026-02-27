/*
 Assignment: 11
 Problem: 04
 Topic: Constructor
 Description: Define a class Room for a hotel management project with room number, room type, is_AC, price as instance variables. Initialise instance variables using constructor.
 Date: 21-01-2026
*/
#include<iostream>
#include<string.h>
using namespace std;
class Room
{
    private:
        int roomno;
        char roomtype[10];
        bool is_AC;
        float price;
    public:
        Room(int n,char t[],bool ac,float p)
        {
            roomno=n;
            strcpy(roomtype,t);
            is_AC=ac;
            price=p;
        }
        void showDetails()
        {
            system("clear");
            cout<<roomno<<endl<<roomtype<<endl<<(is_AC?"AC":"Non-AC")<<endl<<"Price: "<<price<<endl;
        }
};
int main()
{
    int l;
    char t[10];
    cout<<"Room type: ";
    fgets(t,10,stdin);
    l=strlen(t);
    if(t[l-1]=='\n')
        t[l-1]='\0';
    Room r1(13,t,true,30000);
    // Room r1={13,t,true,30000};
    r1.showDetails();
    cout<<endl;
    return 0;
}