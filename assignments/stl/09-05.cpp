/*
 Assignment: 09
 Problem: 05
 Topic: stack
 Description: Implement Tower of Hanoi problem using stack through iteration.
 Date: 04-03-2026
*/
#include<iostream>
#include<stack>
using namespace std;
class State
{
    public:
        int n;
        char source;
        char helper;
        char destination;
        int stage;
};
void toh_iterative(int,char,char,char);
void toh(int,char,char,char);
int main()
{
    char src='A',aux='B',des='C';
    // toh(4,src,aux,des);
    toh_iterative(4,src,aux,des);
    return 0;
}

void toh(int n,char source,char helper,char destination)
{
    if(n)
    {
        if(n<0)
            n*=-1;
        if(n==1)
            cout<<source<<" to "<<destination<<endl;
        else
        {
            toh(n-1,source,destination,helper);
            cout<<source<<" to "<<destination<<endl;
            toh(n-1,helper,source,destination);
        }
    }
}

void toh_iterative(int n,char source,char helper,char destination)
{
    stack <State> frame;
    if(n)
    {
        if(n<0)
            n*=-1;
        frame.push({n,source,helper,destination,0});
        while(!frame.empty())
        {
            switch(frame.top().stage)
            {
                case 0:
                    if(frame.top().n==1)
                    {
                        cout<<frame.top().source<<" to "<<frame.top().destination<<endl;
                        frame.pop();
                        continue;
                    }
                    else
                    {
                        frame.top().stage++;
                        frame.push({frame.top().n-1,frame.top().source,frame.top().destination,frame.top().helper,0});
                        continue;
                        // toh(n-1,source,destination,helper);
                        // cout<<source<<" to "<<destination<<endl;
                        // toh(n-1,helper,source,destination);
                    }
                case 1:
                    frame.top().stage++;
                    cout<<frame.top().source<<" to "<<frame.top().destination<<endl;
                case 2:
                    frame.top().stage++;
                    frame.push({frame.top().n-1,frame.top().helper,frame.top().source,frame.top().destination,0});
                    continue;
                default:
                    frame.pop();
                    continue;
            }   
        }
    }
}